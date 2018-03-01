#ifndef MIRON_SOLUTION
#define MIRON_SOLUTION
#include "state.cpp"

using namespace std;

Chooser chooser;

void f(int r, int c, int f, int n, int b, int t){
    allFinishedRides.resize(N+1);
    for(int i=0; i <f ;i++){ //inicjajcja
        rideEndCord.push_back(make_pair(0,0));
        rideEndTime.push_back(0);
        nextEndedRide.insert(make_pair(0,i));

    }
    currentTime = 0;

    while(nextEndedRide.begin()->.first < t && nextEndedRide.isEmpty() == false){
        auto endedRide = *nextEndedRide.begin();
        position currentPosition = rideEndCord[endedRide.second];
        set.erase(set.begin());
        currentTime = endedRide.first;

        int nextRide = chooser.chooseNextRideForCar(endedRide.second);

        if(nextRide != -1){
            allFinishedRides[endedRide.second].push_back(make_pair(nextRide,currentTime));

            rideEndTime[endedRide.second] = currentTime+dist(currentPosition,allRides[nextRide]);
            rideEndCord[endedRide.second] = allRides[nextRide];
        }

    }

}


#endif //MIRON_SOLUTION