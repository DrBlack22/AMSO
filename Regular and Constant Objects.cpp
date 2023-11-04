#include <iostream>
#include "ham.h"
#include "ham.cpp"
using namespace std;
int main()
{
    ham HO;
    HO.printHam();

    const ham HO2;
    HO2.printFam();
}
