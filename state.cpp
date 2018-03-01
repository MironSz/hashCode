#ifndef STATE
#define STATE

#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <math>

using namespace std;
using position = pair<int,int>;
using kwant = int;
kwant currentTime;

struct ride {
    int number;
    position starting_point;
    position finishing_point;
    kwant earliest_start;
    kwant latest_finish;

    bool isTaken();
};

int dist(position a, position b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}

vector<vector<pair<int,kwant>>> allFinishedRides; //id drogi, czas rozpoczęcia
vector<ride> allRides;   //wszystkie możliwe trasy
vector<position> rideEndCord;  //gdzie samochód skończy
vector<kwant> rideEndTime; //kiedy samochód skończy
set<pair<kwant,int>> nextEndedRide;  //który samochód skończy jako następny

class Chooser{
    int chooseNextRideForCar(int carId){
        return 1;
    }
};

struct car {
    position current_position;
    vector<ride> realised_rides;

    time make_ride(const ride&);
};






#endif //STATE