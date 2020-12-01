//
// Created by Bi Nguyen on 11/5/20.
//

#ifndef HEAP_MAXHEAP_H
#define HEAP_MAXHEAP_H


#include <vector>

class maxHeap {

private:
    int* arr;
    int size;
    void heapifyUp(unsigned index);
    void heapifyDown(unsigned index);



public:
    maxHeap();
    maxHeap(int a);
    maxHeap(const std::vector<int>&values);
    bool isEmpty();
    void insert(int value);
    void removeMax();
    int getSize() const;
    int getMax() const;
    int find(int value) const;
    void update(int pos, int value);

    int *getArr() const;

    ~maxHeap();



};


#endif //HEAP_MAXHEAP_H
