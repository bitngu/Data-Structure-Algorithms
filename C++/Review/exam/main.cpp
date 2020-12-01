#include <iostream>
class Books{
private:
    std::string name;
    int year;
    std::string type;
};

bool operator<(const Books& lhs, const Books& rhs){
    int name_size = std::min(lhs.name, rhs.name);
    int type_size = std::min(lhs.name, rhs.name);
    for (int i = 0; i < min_size; ++i) {
        if (lhs.name[i] < rhs.name[i]){
            return true;
        }
    }

    if (lhs.year < rhs.year){
        return true;
    }
    for (int j = 0; j < type_size  ; ++j) {
        if(lhs.type[j] < rhs.type[j]){
            return true;
        }

    }


}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}