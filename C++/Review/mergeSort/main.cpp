#include <iostream>

template <typename T>
void swap(T* a, T* b ){
    T temp = *a;
    *a = *b;
    *b = temp;
}

template <typename T>
void merge(T A[], int low, int high, int mid){
    int i = low;
    int j = mid+1;
    T* B = new T [high];
    for (int l = 0; l <= high ; ++l) {
        B[l] = A[l];
    }
    for (int k = low; k <= high ; ++k) {
        if (i > mid){
            A[k] = B[j++];
        }
        else if(j > high){
            A[k] =B[i++];

        }
        else if (B[j] < B[i]){
            A[k] = B[j++];
        }
        else{
            A[k] = B[i++];
        }

    }



}


template <typename T>
void mergeSort(T Ar[], int left, int right){
    if (left == right){
        return;
    }
    int mid = (left + right)/2;
    mergeSort(Ar, left, mid);
    mergeSort(Ar, mid+1, right);
    merge(Ar, left, right, mid);

}



int main() {
    int Ar[] {4,10,7,2,6,11};
    mergeSort(Ar, 1,4);
    return 0;
}