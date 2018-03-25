//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#ifndef HASHCODE_STRUCTS_H
#define HASHCODE_STRUCTS_H


#include <utility>
#include <vector>

using position = std::pair<int,int>;
using kwant = int;

struct ride {
    int number;
    position starting_point;
    position finishing_point;
    int earliest_start;
    int latest_finish;

    bool operator<(const ride& b);
};


bool cccomp(const ride& a, const ride& b);


#endif //HASHCODE_STRUCTS_H
