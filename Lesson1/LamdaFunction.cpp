#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// void PrintValues(int value)
// {
//     std::cout << "Value: " << value << std::endl;
// }

// void ForEach(std::vector<int>& values, void(*func)(int))
// {
//     for (int value: values)
//     {
//         func(value);
//     }
// }

typedef void(*func)(int);

void ForEach(std::vector<int>& values, func f)
{
    for (int value: values)
    {
        f(value);
    }
}

void ForEach1(std::vector<int>& values, const std::function<void(int)>& func)
{
    for (int value: values)
    {
        func(value);
    }
}

int main()
{
    std::vector<int> values = {1, 2, 3, 4, 5};
    //ForEach(values, PrintValues);
    //ForEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });

    auto lambda = [](int value) { std::cout << "Value: " << value << std::endl; };
    ForEach(values, lambda);

    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
    std::cout << *it << std::endl;


    int a = 5;

    auto lambda1 = [=](int value) { std::cout << "Value: "<< value << " a: " << a << std::endl; };
    
    a = 8;
    ForEach1(values, lambda1);
    std::cout << "aaa : " << a << std::endl;

    auto lambda2 = [=](int value) mutable { a = 7; std::cout << "Value: "<< value << " a: " << a << std::endl; };
    ForEach1(values, lambda2);
    std::cout << "a : " << a << std::endl;

    auto lambda3 = [&](int value) { a = 10; std::cout << "Value: "<< value << " a: " << a << std::endl; };
    ForEach1(values, lambda3);
    std::cout << "a : " << a << std::endl;

    int b = 10;

    auto lambda4 = [a, &b](int value) { b = 20; std::cout << "Value: "<< value << " a: " << a << " b: " << b<< std::endl; };
    ForEach1(values, lambda4);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    


    return 0;
}