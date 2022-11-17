#include <iostream>

class Square 
{
    public:
        int operator()(int x)
        {
            return x*x;
        }
};

class Neg
{
    public:

        int operator()(int x)
        {
            return -x;
        }
};

template<typename T>
int do_some_process(T process, int x)
{
    return process(x);
}

int main()
{
    Square a;
    std::cout << a(3) << std::endl;

    Neg b;
    std::cout << do_some_process(a,3) << std::endl;
    std::cout << do_some_process(b,3) << std::endl;
    
    return 0;
}