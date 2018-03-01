#include "structs.h"

using namespace std;

int dist(position a, position b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}
