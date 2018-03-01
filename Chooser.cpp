//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#include "Chooser.h"

using namespace std;

list<ride> :: iterator AvalibleChooser::chooseNextRideForCar(int carIdm, State& state) {

    for (auto potentialRide = state.allRides.begin(); potentialRide != state.allRides.end(); potentialRide++) {
        int d = dist(state.rideEndCord[carIdm], potentialRide->starting_point);
        int r = dist(potentialRide->starting_point, potentialRide->finishing_point);
        if (d + state.currentTime + r < potentialRide->latest_finish) {
            return potentialRide;
        }
    }
    return state.allRides.end();

}

list<ride>::iterator NearestChooser::chooseNextRideForCar(int carIdm, State& state) {
    long long minn = state.params.C + state.params.R;
    auto who = state.allRides.end();
    for (auto potentialRide = state.allRides.begin(); potentialRide != state.allRides.end(); potentialRide++) {
        int d = dist(state.rideEndCord[carIdm], potentialRide->starting_point);
        if(d + state.currentTime < state.params.T) {
            if(d < minn) {
                minn = d;
                who = potentialRide;
            }
        }
    }
    return who;
}
