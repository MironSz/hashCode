//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#include "Chooser.h"


int AvalibleChooser::chooseNextRideForCar(int carIdm, const State& state) {

    for (auto potentialRide: state.allRides) {
        if (dist(state.rideEndCord, potentialRide.starting_point) + state.currentTime < state.params.T) {
            return potentialRide.number;
        }
    }

}
