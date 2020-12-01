#include <iostream>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


//Goal: Implement insertion sort in reverse: Sort in descending order
void insertionSort(int Ar[], int size){
    for (int i = 1; i < size; ++i) {
        for (int j = i; j > 0; --j) {
            if(Ar[j] > Ar[j-1]){
                swap(&Ar[j-1], &Ar[j]);
            }

        }

    }
}


int main() {
    int A[] {4, 7, 10,2,6,11};
    int size = 6;
    insertionSort(A, size);
    for (int i = 0; i < 6; ++i) {
        std::cout << A[i] << std::endl;
    }
    return 0;
}