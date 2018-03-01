//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#ifndef HASHCODE_IO_H
#define HASHCODE_IO_H

#include "structs.h"

struct parameters {
    long long R, C, F, N, B, T;
};



parameters readParameters();
std::vector<ride> readRides();


#endif //HASHCODE_IO_H
