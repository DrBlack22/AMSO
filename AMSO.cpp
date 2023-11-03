#include <iostream>
#include "ham.h"
#include "ham.cpp"
using namespace std;
int main()
{
    ham HO;
    ham *hamPointer = &HO;
    HO.printHam();
    hamPointer->printHam();
}
