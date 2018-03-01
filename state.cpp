#ifndef STATE
#define STATE

#include <iostream>
#include <vector>
#include <set>
#include <list>

using namespace std;
using position = pair<int,int>;
using kwant = int;
time currentTime;

struct ride {
    int number;
    position starting_point;
    position finishing_point;
    kwant earliest_start;
    kwant latest_finish;

    bool isTaken();
};


vector<vector<pair<int,kwant>>> allFinishedRides; //id drogi, czas rozpoczęcia
vector<ride> allRides;   //wszystkie możliwe trasy
vector<position> rideEndCord[2];  //gdzie samochód skończy
vector<kwant> rideEndTime; //kiedy samochód skończy
set<pair<kwant,int>> nextEndedRide;  //która trasa się skończy następna

class Chooser{
    int chooseNextRideForCar(int carId){

    }
};



struct car {
    position current_position;
    vector<ride> realised_rides;

    time make_ride(const ride&);
};






#endif //STATE