//
//  utils.h
//  InsertionSort
//
//  Created by Vishal Singh on 15/06/18.
//  Copyright © 2018 vishcool. All rights reserved.
//

#ifndef utils_h
#define utils_h

#include <random>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> random_vector( int size, int lb, int ub){
    // uniformly-distributed integer random number generator that produces non-deterministic random numbers
    random_device rnd_device;
    // A psuedo random number generator
    mt19937 rnd_engine(rnd_device());
    uniform_int_distribution<int> dist {1, 52};
    
    auto gen = [&dist, &rnd_engine](){
        return dist(rnd_engine);
    };
}

#endif /* utils_h */
