//
// Created by Bi Nguyen on 10/13/20.
//

#ifndef HOMEWORK_1_BOOKS_H
#define HOMEWORK_1_BOOKS_H


#include <string>

class Books {

private:
    //attributes
    int isbn;
    std::string language;
    std::string type;

public:

    //Constructors
    Books(int isbn);
    Books(int isbn, const std::string& language);
    Books(int isbn, const std::string& language, const std::string& type);
    Books(const Books&& obj); //Move Constructor
    Books(const Books& obj); //Copy Constructor

    //Destructors
    ~Books();

    //operator overload
    bool operator<(const Books& rhs) const;
    bool operator==(const Books& rhs) const;
    Books& operator=(const Books& rhs);


    //Getters and Setters
    int getIsbn() const;

    void setIsbn(int isbn);

    const std::string &getLanguage() const;

    void setLanguage(const std::string &language);

    const std::string &getType() const;

    void setType(const std::string &type);

};


#endif //HOMEWORK_1_BOOKS_H
