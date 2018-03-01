#include <iostream>
#include "io.h"
#include <list>
using namespace std;

parameters readParameters() {
    parameters t;
    cin >> t.R >> t.C >> t.F >> t.N >> t.B >> t.T;
    return t;
}

std::list<ride> readRides(long long N) {
    list<ride> rides;
    for(int i=0; i<N; ++i) {
        ride n;
        for (int i = 0; i < N; ++i) {
            cin >> n.starting_point.first
                >> n.starting_point.second
                >> n.finishing_point.first
                >> n.finishing_point.second
                >> n.earliest_start
                >> n.latest_finish;
            n.number = i;
        }
        rides.push_back(n);
    }
    return rides;
}


