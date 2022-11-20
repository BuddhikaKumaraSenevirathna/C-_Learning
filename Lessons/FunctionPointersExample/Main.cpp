#include "A.cpp"
#include "B.cpp"

int main()
{
    A a = A();
    B b = B();

    PrintHelloWorldFunc func = a.PrintHelloWorld;
    func();

    AddTwoNumbersFunc addFunc = a.AddTwoNumbers;
    int sum = addFunc(2,3);
    printf("Sum : %d \n", sum);

    vector<int> values = {1, 2, 3, 4, 5};
    b.ForEach(values, a.PrintValues);

    return 0;
}