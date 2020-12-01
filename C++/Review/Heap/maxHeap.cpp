//
// Created by Bi Nguyen on 11/5/20.
//

#include "maxHeap.h"

maxHeap::maxHeap(int a) {
    size = 0;
    arr = new int [2];
    arr[0] = 0;
    arr[1] = a;
    ++size;
}

maxHeap::maxHeap() {
    size = 0;
    arr = new int (0);
}

maxHeap::maxHeap(const std::vector<int>& values) {
    arr = new int [values.size()];
    size = 0;
    arr[0] = 0;
    for (unsigned i = 0; i < values.size() ; ++i) {
        insert(values[i]);
    }

}

maxHeap::~maxHeap() {
    delete [] arr; //this causes sigabort, why?
    arr = nullptr;
}

int maxHeap::getMax() const {
    int* temp = arr;
    return *(++temp);
}

void maxHeap::insert(int value) {
    //+1 for the position 0;
    int* temp = new int [++size + 1];
    int i = 0;
    for (; i < size; ++i) {
        temp[i] = arr[i];
    }
    //add the new value to the end of the list
    temp[i] = value;
    delete [] arr;
    arr = nullptr;
    arr = temp;
    heapifyUp(i);
}

bool maxHeap::isEmpty() {
    return size == 1;
}

int maxHeap::getSize() const {
    return size;

}



void swap (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeap::heapifyUp(unsigned k) {
    //k is the position of the child
    //Now check if current value is > parent
    if (size > 1) {
        while (arr[k] > arr[k / 2] && k/2 > 0) { //child > parent; swap
            swap(&arr[k], &arr[k / 2]);
            k /= 2;

        }
    }
}

void maxHeap::removeMax() {
    //So to remove the root or the max "node". Replace the last value with the root and heapify down
    arr[1] = arr[size];

    //Should resize the heap since I'm deleting it
    int* temp = new int [size];
    for (unsigned i = 0; i < size; ++i) {
        temp[i] = arr[i];
    }
    arr = temp;
    heapifyDown(1);
    --size;

}


void maxHeap::heapifyDown(unsigned k) {
    //So to heapify down means to compare root with child and see if it is misplaced
    //This function will do nothing if size < 3;

    //We want to swap with the largest child whether left or right;

    unsigned left = 2*k;
    unsigned right = 2*k +1;

    while(left <= size) {//
        //need to update new parent
        if (arr[left] < arr[right] && arr[k] < arr[right]){//if leftChild < rightChild and parent < rightChild; swap
            swap(&arr[k], &arr[right]);
            k = right; //get child index to be the next parent
        }else if (arr[left] > arr[right] && arr[left] > arr[k]){
            swap(&arr[k], &arr[left]);
            k = left; //get child index to be the next parent
        } else{//I'm at the correct spot
            break;
        }
        left = 2*k;
        right = 2*k +1;


    }
}

int *maxHeap::getArr() const {
    return arr;
}

int maxHeap::find(int value) const {
    for (int i = 1; i <= size ; ++i) {
        if (arr[i]==value){
            return 1;
        }
    }
    return 0;
}

void maxHeap::update(int pos, int value) {
    arr[pos] = value;
    if (arr[pos] > arr[pos/2]){//if child > parent
        heapifyUp(pos);
    }else if (arr[pos] < arr[pos*2] || arr[pos] < arr[pos*2+1]){//if parent < either child
        heapifyDown(pos);
    }



}



