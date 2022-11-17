#include <iostream>
#include <vector>

void HelloWorld()
{
    std::cout << "Hello World!" << std::endl;
}

int Add(int x, int y)
{
    return x+y;
}

// void ForEach(std::vector<int>& values)
// {
//     for (int value: values)
//     {
//         std::cout << "Value: " << value << std::endl;
//     }
// }

void PrintValues(int value)
{
    std::cout << "Value: " << value << std::endl;
}

void ForEach(std::vector<int>& values, void(*func)(int))
{
    for (int value: values)
    {
        func(value);
    }
}

int main()
{
    // auto function = HelloWorld;
    // function();
    // function();

    // void(*function)();
    // function = HelloWorld;
    // function();
    // function();

    //typedef void(*HelloWorldFunction)();
    using HelloWorldFunction = void(*)();
    HelloWorldFunction function = HelloWorld;
    function();

    //typedef int(*AddFunction)(int, int);
    using AddFunction = int(*)(int, int);
    AddFunction add = Add;
    int sum = add(2,3);
    std::cout << "sum : "<< sum << std::endl;

    std::vector<int> values = {1, 2, 3, 4, 5};
    ForEach(values, PrintValues);

    return 0;
}