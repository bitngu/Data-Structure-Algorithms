#include <iostream>
#include "maxHeap.h"

//A binary heap has a structure similar to a tree but it does have similar requirement to a tree such as
//  a. At most 2 children per node
//  b. Parent >= children
//  c. Every row is full except the last row;


//It has the following functions
//  1. insert
//  2. removeMax
//  3. max
//  4. size
//  5. is empty




int main() {
    std::vector <int> v {31,10,6,24,44,55,48,59};



    /*               79
     *            55   48
     *          24 22 6 44
     *
     *
     */

    maxHeap h (v);
    h.insert(66);
    h.removeMax();
    h.removeMax();

    h.update(2,22);
    h.update(4, 79);
    h.update(6, 33);
    for (int i = 0; i <= h.getSize() ; ++i) {
        std::cout << h.getArr()[i] << " ";
    }



    return 0;
}