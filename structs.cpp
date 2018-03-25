#include "structs.h"


bool cccomp(const ride& a, const ride& b)  {
    return a.earliest_start < b.earliest_start;

}

bool ride::operator<(const ride& b) {
    return earliest_start < b.earliest_start;
}
