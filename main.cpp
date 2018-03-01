#include <iostream>
#include <vector>

using namespace std;
using position = pair<int,int>;
using time = int;

struct ride {
    int number;
    position starting_point;
    position finishing_point;
    int earliest_start;
    int latest_finish;

    bool isTaken();
};

struct car {
    position current_position;
    vector<ride> realised_rides;

    time make_ride(const ride&);
};





int main() {
    std::cout << "Hello, Miron!" << std::endl;
    return 0;
}
