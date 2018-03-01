#ifndef STATE
#define STATE

#include <iostream>
#include <vector>
#include <set>
#include <list>

using namespace std;
using position = pair<int,int>;
using time = int;
time currentTime;

struct ride {
    int number;
    position starting_point;
    position finishing_point;
    int earliest_start;
    int latest_finish;

    bool isTaken();
};


vector<vector<pair<int,time>>> allFinishedRides; //id drogi, czas rozpoczęcia
vector<ride> allRides;   //wszystkie możliwe trasy
vector<position> rideEndCord[2];  //gdzie samochód skończy
vector<int> rideEndTime; //kiedy samochód skończy
set<pair<time,int>> nextEndedRide;  //która trasa się skończy następna


int chooseNextRideForCar(int carId){

}

struct car {
    position current_position;
    vector<ride> realised_rides;

    time make_ride(const ride&);
};






#endif //STATE