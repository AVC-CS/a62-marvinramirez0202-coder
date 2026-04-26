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
    return (rand() % 100);
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
    // TODO
    int mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
    int smallest = 0;
    int dif1= mean - rdnum1;
    int dif2 = mean - rdnum2;
    int dif3 = mean - rdnum3;

    if(abs(dif1) < abs(dif2) & abs(dif1) < abs(dif3)){
        smallest = rdnum1;
    }
    else if(abs(dif2) < abs(dif1) & abs(dif2) < abs(dif3)){
        smallest = rdnum2;
    }
    else{
        smallest = rdnum3;
    }
    return smallest;
}
