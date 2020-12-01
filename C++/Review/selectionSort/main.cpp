#include <iostream>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Goal: Implement selection sort in descending order
void selectionSort(int Ar[], int size){
    //Assume the first position is the largest value
    for (int i = 0; i < size; ++i) {
        int currMax = i;
        for (int j = i+1; j < size; ++j) {
            if (Ar[currMax] < Ar[j]){
                currMax = j;
            }
        }
        swap(&Ar[i], &Ar[currMax]);
    }
}


int main() {
    int A[] {4, 7, 10,2,6,11};
    int size = 6;
    selectionSort(A,6);
    for (int i = 0; i < 6; ++i) {
        std::cout << A[i] << std::endl;
    }
    return 0;
}