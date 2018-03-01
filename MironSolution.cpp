#ifndef MIRON_SOLUTION
#define MIRON_SOLUTION
#include "state.h"
#include "Chooser.h"

using namespace std;


void f(){
    //AvalibleChooser chooser;
    NearestChooser chooser;
    State state;


    while(state.nextEndedRide.begin()->first < state.params.T && state.nextEndedRide.empty() == false){
        auto endedRide = *state.nextEndedRide.begin();
        position currentPosition = state.rideEndCord[endedRide.second];
        state.nextEndedRide.erase(state.nextEndedRide.begin());
        state.currentTime = endedRide.first;

        auto nextRide = chooser.chooseNextRideForCar(endedRide.second, state);

        if(nextRide != state.allRides.end()){

            state.completedRidesByCars[endedRide.second].push_back(nextRide->number);
            state.rideEndTime[endedRide.second] = state.currentTime + dist(currentPosition,nextRide->finishing_point); // ?startign point
            state.rideEndCord[endedRide.second] = nextRide->finishing_point;
            state.allRides.erase(nextRide);
        }

    }

    state.printOutput();
}


#endif //MIRON_SOLUTION