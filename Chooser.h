//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#ifndef HASHCODE_CHOOSER_H
#define HASHCODE_CHOOSER_H

#include "state.h"

struct Chooser{
    virtual int  chooseNextRideForCar(int carIdm, const State& state) = 0;
};

struct AvalibleChooser : public Chooser {
    int chooseNextRideForCar(int carIdm, const State& state);
};



#endif //HASHCODE_CHOOSER_H
