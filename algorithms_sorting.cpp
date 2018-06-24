//
//  algorithms_sorting.cpp
//  InsertionSort
//
//  Created by Vishal Singh on 22/06/18.
//  Copyright © 2018 vishcool. All rights reserved.
//

#include "algorithms_sorting.hpp"

void merge(std::vector<int> &A, size_t p, size_t q, size_t r){
    size_t size_left = q - p + 1, size_right = r - q ;
    
    int *left = new int[size_left + 1];
    int *right = new int[size_right + 1];
    
    std::copy(A.begin() + p, A.begin() + q + 1, left);
    std::copy(A.begin() + q + 1, A.begin() + r + 1, right);
    left[size_left] = right[size_right] = INT_MAX;
    
    for ( unsigned long i=0, j=0, k=p; k<=r; ++k ){
        A[ k ] = (left[ i ] < right[ j ]) ? (left[ i++ ]) : (right[ j++ ]);
    }
}
void mergeSort(std::vector<int> &A, size_t p, size_t r){
    if( r > p){
        size_t q = (p+r)/2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    }
}
void mergeSort(std::vector<int> &A){
    mergeSort(A, 0, A.size()-1);
}

size_t partition(std::vector<int>& A,int p, int r, bool random){
    // randomized pivot element
    int rnd = (random) ? (random_number (p, r)) : (r) ;
    if(rnd != r )
       std::swap(A[rnd], A[r]);
    
    int key = A[r];
    int i = p-1;
    for (int j = p; j < r; j++)
        if (A[j] < key) std::swap(A[++i], A[j]);
    std::swap(A[i+1], A[r]);
    return i+1;
}

void quick_sort(std::vector<int>& A, int p, int r, bool random){
    if(p<int(r)){
        int q = partition(A, p, r, random);
        quick_sort(A, p, q-1);
        quick_sort(A, q+1, r);
    }
}

void insertionSort(std::vector<int> &A){
    for (size_t j = 1; j < A.size(); ++j){
        long long int i = j - 1;
        int key = A[j];
        while(A[i] > key && i >= 0){
            A[i + 1] = A[i];
            --i;
        } A[i+1] = key;
    }
}
