//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#ifndef HASHCODE_CHOOSER_H
#define HASHCODE_CHOOSER_H

#include "state.h"
#include <list>
using namespace std;


struct Chooser{
    virtual list<ride> ::iterator chooseNextRideForCar(int carIdm,  State& state) = 0;
};

struct AvalibleChooser : public Chooser {
    list<ride> ::iterator chooseNextRideForCar(int carIdm,  State& state) override;
};

struct NearestChooser : public Chooser {
    list<ride> ::iterator chooseNextRideForCar(int carIdm,  State& state) override;
};


#endif //HASHCODE_CHOOSER_H
