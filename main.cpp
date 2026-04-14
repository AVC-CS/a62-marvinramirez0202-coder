//
#include "main.hpp"

int main()
{
        int rdnum1, rdnum2, rdnum3;
        int result;

        srand(time(0));

        rdnum1 = getRandom();
        rdnum2 = getRandom();
        rdnum3 = getRandom();

        cout << "Random values " << rdnum1 << "\t" << rdnum2 << "\t" << rdnum3 << endl;
        cout << " Mean Value is " << (rdnum1 + rdnum2 + rdnum3) / 3.0 << endl;

        result = getClosestMed(rdnum1, rdnum2, rdnum3);
        cout << "The closest value to mean is " << result << endl;
}