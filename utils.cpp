//
//  utils.cpp
//  InsertionSort
//
//  Created by Vishal Singh on 15/06/18.
//  Copyright © 2018 vishcool. All rights reserved.
//

#include "utils.hpp"

template <class T>
void random_vector (std::vector<T> &vec, T lower_bound, T upper_bound){
    // uniformly-distributed integer random number generator that produces non-deterministic random numbers
    std::random_device rnd_device;
    // A psuedo random number generator
    std::mt19937 rnd_engine(rnd_device());
    std::uniform_int_distribution<T> dist {lower_bound, upper_bound};
    auto gen = [&dist, &rnd_engine](){
        return dist(rnd_engine);
    };
    std::generate(begin(vec), end(vec), gen);
}

int random_number (int lower_bound, int upper_bound){
    std::vector<int> random_value(1);
    random_vector<int>(random_value, lower_bound, upper_bound);
    return random_value[0];
}
