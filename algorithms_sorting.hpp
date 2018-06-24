//
//  algorithms_sorting.hpp
//  InsertionSort
//
//  Created by Vishal Singh on 22/06/18.
//  Copyright © 2018 vishcool. All rights reserved.
//

#ifndef algorithms_sorting_hpp
#define algorithms_sorting_hpp

#include "utils.hpp"

void merge(std::vector<int> &A, size_t p, size_t q, size_t r);
void mergeSort(std::vector<int> &A, size_t p, size_t r);
void insertionSort(std::vector<int> &A);
size_t partition(std::vector<int>& A,int p, int r, bool random=true);
void quick_sort(std::vector<int>& A, int p, int r, bool random=true);

#endif /* algorithms_sorting_hpp */
