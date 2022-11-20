#include "B.h"

void B::ForEach(vector<int>& values, PrintValuesFunc func)
{
    for (int value: values)
    {
        func(value);
    }
}