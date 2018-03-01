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
    std::vector<std::vector<std::pair<int,kwant>>> allFinishedRides; //id auta, id drogi
    std::list<ride> allRides;   //wszystkie możliwe trasy
    std::vector<position> rideEndCord;  //gdzie samochód skończy
    std::vector<kwant> rideEndTime; //kiedy samochód skończy
    std::set<std::pair<kwant,int>> nextEndedRide;  //która samochód nastepny się skończy następna
    std::vector<std::vector<int>> completedRidesByCars;
    parameters params;
    kwant currentTime;

    explicit State() {
        params = readParameters();
        allRides = readRides(params.N);
        completedRidesByCars.resize(params.F);
    }

    void printOutput() {
        for(auto a: completedRidesByCars) {
            std::cout<<a.size()<<" ";
            for(auto r: a) {
                std::cout<<r<<" ";
            }
            std::cout<<"\n";
        }
    }


};

int dist(position a, position b);


#endif //HASHCODE_STATE_H
