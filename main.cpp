#include <iostream>
#include <vector>
#include "structs.h"
#include "io.h"

using namespace std;

parameters params;
vector<ride> rides;

int main() {
    params = readParameters();
    rides = readRides();
    return 0;
}
