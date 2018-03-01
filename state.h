//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#ifndef HASHCODE_STATE_H
#define HASHCODE_STATE_H

#include <iostream>
#include <vector>
#include <set>
#include <list>
#include "structs.h"
#include "io.h"

struct State {
    std::vector<std::vector<std::pair<int,kwant>>> allFinishedRides; //id drogi, czas rozpoczęcia
    std::vector<ride> allRides;   //wszystkie możliwe trasy
    std::vector<position> rideEndCord;  //gdzie samochód skończy
    std::vector<kwant> rideEndTime; //kiedy samochód skończy
    std::set<std::pair<kwant,int>> nextEndedRide;  //która samochód nastepny się skończy następna
    parameters params;

    explicit State() {
        params = readParameters();
        allRides = readRides(params.N)
    }
};

#endif //HASHCODE_STATE_H
