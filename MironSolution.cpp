#ifndef MIRON_SOLUTION
#define MIRON_SOLUTION
#include "state.h"
#include <set>
#include "Chooser.h"

using namespace std;

AvalibleChooser chooser;
State state;
void f(int r, int c, int f, int n, int b, int t){
    state.allFinishedRides.resize(state.params.N+1);
    for(int i=0; i <f ;i++){ //inicjajcja
        state.rideEndCord.push_back(make_pair(0,0));
        state.rideEndTime.push_back(0);
        state.nextEndedRide.insert(make_pair(0,i));

    }
    state.currentTime = 0;

    while(state.nextEndedRide.begin()->first < t && state.nextEndedRide.empty() == false){
        auto endedRide = *state.nextEndedRide.begin();
        position currentPosition = state.rideEndCord[endedRide.second];
        state.nextEndedRide.erase(state.nextEndedRide.begin());
        state.currentTime = endedRide.first;

        auto nextRide = chooser.chooseNextRideForCar(endedRide.second, state);

        if(nextRide != state.allRides.end()){

            state.allFinishedRides[endedRide.second].push_back(make_pair(nextRide->number,state.currentTime));

            state.rideEndTime[endedRide.second] = state.currentTime + dist(currentPosition,nextRide->finishing_point); // ?startign point
            state.rideEndCord[endedRide.second] = nextRide->finishing_point;
        }

    }

}


#endif //MIRON_SOLUTION