#include <iostream>

class A 
{
    public:
        int operator()(int x) 
        { 
            return x*x;
        }

        int operator()(int x, int y) 
        { 
            return x*y;
        }

        int GetNegativeNumber(int x);
};
