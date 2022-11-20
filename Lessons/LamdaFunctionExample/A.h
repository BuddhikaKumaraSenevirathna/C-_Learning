#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <array>

using namespace std;

class A 
{
public:
    void ForEach(vector<int>& values, const function<void(int)>& func )
    {
        for (int value: values)
        {
            func(value);
        }
    }
};
