#include <iostream>
#include <vector>
#include "Defines.h"

using namespace std;

class A 
{
    public:
        A(){}
        ~A(){}

        static void PrintHelloWorld();

        static int AddTwoNumbers(int x, int y);

        static void PrintValues(int value);
};

