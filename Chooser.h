//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#ifndef HASHCODE_CHOOSER_H
#define HASHCODE_CHOOSER_H

#include "state.h"

struct Chooser{
    int chooseNextRideForCar(int carIdm, const State& state);
};




#endif //HASHCODE_CHOOSER_H
