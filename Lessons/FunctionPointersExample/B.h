#include <iostream>
#include <vector>
#include "Defines.h"

using namespace std;

class B 
{
    public:
        B(){}
        ~B(){}

        void ForEach(vector<int>& values, PrintValuesFunc func);
};

