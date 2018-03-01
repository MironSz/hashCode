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

    bool isTaken;
};

struct car {
    position current_position;
    std::vector<ride> realised_rides;

};

#endif //HASHCODE_STRUCTS_H
