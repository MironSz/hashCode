//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#include "Chooser.h"

using namespace std;

list<ride> :: iterator AvalibleChooser::chooseNextRideForCar(int carIdm, State& state) {

    for (auto  potentialRide = state.allRides.begin(); potentialRide != state.allRides.end(); potentialRide++) {
        if (dist(state.rideEndCord[carIdm], potentialRide->starting_point) + state.currentTime < state.params.T) {
            return potentialRide;
        }
    }

}
