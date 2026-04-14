//
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

int getRandom(void)
{
    // TODO
    return rand() % 100;
    // TODO
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
    // TODO
    double mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
    int closest = rdnum1;
    double minGap = abs(rdnum1 - mean);
    if (abs(rdnum2 - mean) < minGap) {
        closest = rdnum2;
        minGap = abs(rdnum2 - mean);
    }
    if (abs(rdnum3 - mean) < minGap) {
        closest = rdnum3;
    }
    return closest;
    // TODO
}
