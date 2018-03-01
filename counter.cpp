#include "counter.h"
#include <iostream>
#include <vector>
#include "io.h"

using namespace std;

int countPoints(parameters &t, std::list<ride> &ridesl) {
    vector<ride> rides{ridesl.begin(), ridesl.end()};
    int points = 0;
    for (int i = 0; i < t.F; ++i) {
        int M;
        cin >> M;
        long long my_time = 0;
        position current_pos;
        current_pos.first = 0;
        current_pos.second = 0;
        int vehicle_points = 0;
        for (int j = 0; j < M; ++j) {
            int ride_points = 0;
            int r;
            cin >> r;
            my_time += dist(current_pos, rides[r].starting_point);
            current_pos.first = rides[r].starting_point.first;
            current_pos.second = rides[r].starting_point.second;
            if (my_time <= rides[r].earliest_start) {
                ride_points += t.B;
                my_time = rides[r].earliest_start;
            }
            int ride_dist = dist(rides[r].starting_point, rides[r].finishing_point);
            my_time += ride_dist;
            current_pos.first = rides[r].finishing_point.first;
            current_pos.second = rides[r].finishing_point.second;
            if (my_time < rides[r].latest_finish) {
                ride_points += ride_dist;
            }
            cout << ride_points << ' ';
            vehicle_points += ride_points;
        }
        cout << "sum: " << vehicle_points << '\n';
        points += vehicle_points;
    }
    cout << "all_points: " << points << '\n';
    return points;
}
