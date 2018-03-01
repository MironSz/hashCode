//
// Created by Kamil Mykitiuk on 01/03/2018.
//

#include "Chooser.h"

using namespace std;

int AvalibleChooser::chooseNextRideForCar(int carIdm, const State& state) {

    for (auto potentialRide: state.allRides) {
        if (dist(state.rideEndCord[carIdm], potentialRide.starting_point) + state.currentTime < state.params.T) {
            return potentialRide.number;
        }
    }

}

int NearestChooser::chooseNextRideForCar(int carIdm, const State& state) {
    long long minn = state.params.R + state.params.C;
    int witch = -1;
    int curr;
    for (auto potentialRide: state.allRides) {
        curr = dist(state.rideEndCord[carIdm], potentialRide.starting_point);
        if (curr + state.currentTime < state.params.T) {
            minn = min(minn, curr);
        }
    }
}
