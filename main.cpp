//
//  main.cpp
//  InsertionSort
//
//  Created by Vishal Singh on 15/06/18.
//  Copyright © 2018 vishcool. All rights reserved.
//
#include "utils.hpp"
#include "algorithms_sorting.hpp"
#include <climits>
#include <ctime>
#include <chrono>
#include <thread>

using Clock = std::chrono::steady_clock;
using std::chrono::time_point;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using namespace std::literals::chrono_literals;
using std::this_thread::sleep_for;

#define M 10000000
int main(int argc, const char * argv[]) {
    
    std::vector<double> qsort, qsort_rand,insort,msort;
    time_point<Clock> start,end; milliseconds diff;
    
    for(unsigned int input_size = 10; input_size <= M; input_size*=10)
    {
        std::vector<int> numbers(input_size);random_vector<int>(numbers, 1, input_size);
        
        start = Clock::now();
        quick_sort (numbers, 0, input_size-1, false);
        end = Clock::now(); diff = duration_cast<milliseconds>(end - start);
        qsort.push_back(diff.count());
        
        start = Clock::now();
        mergeSort (numbers, 0, input_size-1);
        end = Clock::now(); diff = duration_cast<milliseconds>(end - start);
        msort.push_back(diff.count());
        
        start = Clock::now();
        insertionSort(numbers);
        end = Clock::now(); diff = duration_cast<milliseconds>(end - start);
        insort.push_back(diff.count());
        
        start = Clock::now();
        quick_sort (numbers, 0, input_size-1);
        end = Clock::now(); diff = duration_cast<milliseconds>(end - start);
        qsort_rand.push_back(diff.count());
    }
    
    std::printf("\nSorting times for various input_sizes:\n \t\t10^1\t\t10^2\t\t10^3\t\t10^4\t\t10^5\t\t10^6\t\t10^7\n");
    printf("QuickSort:\t");
    std::for_each(qsort.begin(), qsort.end(), [&](auto t){
        printf("%f\t",t);
    });
    printf("\nQuickSort(r):\t");
    std::for_each(qsort_rand.begin(), qsort_rand.end(), [&](auto t){
        printf("%f\t",t);
    });
    printf("\nMergeSort:\t");
    std::for_each(msort.begin(), msort.end(), [&](auto t){
        printf("%f\t",t);
    });
    printf("\ninsertionSort:\t");
    std::for_each(insort.begin(), insort.end(), [&](auto t){
        printf("%f\t",t);
    });
    printf("\n\n");

    return 0;
}
