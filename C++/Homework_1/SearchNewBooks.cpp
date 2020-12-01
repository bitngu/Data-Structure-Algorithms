#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <chrono>
#include <algorithm>
#include "Books.h"
#include "Clock.h"


/**
 * Search through a vector of objects relatively
 *
 * @param books: A vector of Book objects
 * @param item : A Books object
 * @return: A bool. Whether an item is found
 */
bool linearSearch (const std::vector<Books>& books, const Books& item){
    bool found{false};
    for (const auto &book: books) {
        if(book == item){
            found = true;
        }
    }
    return found;

}


/**
 *Search through a vector of Books object using binary search method
 *
 * @param books : A vector of Book objects
 * @param item : A Books object
 * @return: A bool. Whether an item is found
 */
bool binarySearch(std::vector<Books>& books, const Books& item) {
    std::sort(books.begin(), books.end());//binary Search requires a sorted list
    int l = 0;
    int r = books.size() - 1;
    bool found = false;
    while (l < r && !found) {
        int m = (l + r)/2;
        if (books.at(m) == item) {
            found = true;
        } else if (item < books.at(m) ) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    return found;
}


bool isValid(char c){
    return c == 'b' || c =='l';
}

/**
 *  Get user's prefered search method
 *
 * @return user's choice
 */
char getUserInput(){
    char selection{};
    std::cout << "Choice of search method ([l]inear, [b]inary)? \n";
    std::cin >> selection;
    while(!isValid(selection)){
        std::cerr << "Incorrect Choice\n" <<std::endl;
        std::cin >> selection;
    }
    return selection;
}


bool searchBooks(std::vector<Books>& newBooks, const Books& requestBook, const char selection){
    bool found {false};
    if (selection == 'l'){
        found = linearSearch(newBooks, requestBook);
    }
    else{
        found = binarySearch(newBooks, requestBook);
    }
    return found;

}
/**
 *
 * Printing class objects
 *
 * @param out: An ostream to print attributes from the Books class
 * @param obj: A Books obj
 * @return : An ostream that store the output
 */
std::ostream& operator<<(std::ostream& out, const Books& obj){
    out << obj.getIsbn() << ',' << obj.getLanguage() << ',' << obj.getType() << '\n';
    return out;
}

/**
 * Write to a file if any of the requested books are found
 * @param requestBooks:
 * @param newBooks
 * @param file_path
 */

void writeToFile(const std::vector<Books>& requestBooks, std::vector<Books>& newBooks,const std::string& file_path){
    bool found {false};
    std::ofstream output{file_path}; //open file
    char selection = getUserInput();
    Clock clock_timer{};
    clock_timer.Reset();
    for (const auto &item : requestBooks) {
        found = searchBooks(newBooks, item, selection); //search if requests books came in from new books
        if (found){
            output << item;
        }
    }
    std::cout << clock_timer;
    output.close();

}


/**
 *Parse files and create objects from input file
 *
 * @param file_path: A valid path to read
 * @return: A vector of Books object
 */
std::vector<Books> readBooks(const std::string& file_path){
    std::ifstream file {file_path};
    std::string line{};
    std::vector<Books> bookFiles;
    while(std::getline(file, line)){
        int isbn {0};
        std::string text{};
        std::stringstream s1{line};
        s1 >> isbn;
        s1 >> text;
        size_t pos = text.find(',',1); //Since we already know the first ',' is at position 0 so we want
        //to find the index of the next  ','
        std::string language{text.substr(1,pos-1)};
        std::string type{text.substr(pos+1,text.size())};
        bookFiles.emplace_back(Books{isbn, language, type});
    }
    file.close();
    return bookFiles;

}


/**
 *
 * Check for valid input from user such as if enough arguments are passed or if file can be open
 * @param argc: Number of arguments user passed
 * @param argv: path to files
 */
void isValidArgs(int argc, char*argv[]){
    if (argc < 4){
        std::cerr << "Error: not enough arguments.\n"<< std::endl;
        exit(1);
    }
    for (int i = 1; i < argc; ++i) {
        if(std::ifstream file{argv[i]}){
           file.close();
        }else{
            std::cerr << "Error: cannot open file "<< argv[i] << std::endl;
            exit(1);
        }
    }
}


int main(int argc, char* argv[]) {
    isValidArgs(argc, argv);
    std::vector<Books> newBooks = readBooks(argv[1]);
    std::vector<Books> requestBooks = readBooks(argv[2]);
    writeToFile(requestBooks, newBooks, argv[3]);
    return 0;
}