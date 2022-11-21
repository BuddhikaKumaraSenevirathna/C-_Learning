#include <iostream>

class B
{
    public:
        int operator()(int val)
        {
            x = val;
            return -val;
        }

        int x;
};