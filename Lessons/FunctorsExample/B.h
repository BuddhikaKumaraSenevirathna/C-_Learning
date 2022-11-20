#include <iostream>

class B
{
    public:
        int operator()(int x)
        {
            return -x;
        }
};