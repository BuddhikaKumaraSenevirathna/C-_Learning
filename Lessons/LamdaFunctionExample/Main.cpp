#include "A.h"

int main()
{
    A a = A();
    vector<int> vecValues = {1, 2, 3, 4, 5};

    a.ForEach(vecValues, [](int value) { printf("Value : %d\t", value); });

    int x = 5;
    auto lambda = [=](int value) { printf("\nValue: %d\t  a : %d", value, x); };
    
    a.ForEach(vecValues, lambda);

    x = 8;
    a.ForEach(vecValues, lambda);


    a.ForEach(vecValues, [=](int value) mutable { x = 7; printf("\nValue: %d\t  x : %d", value, x);});
    printf("\nx is %d", x);

    a.ForEach(vecValues, [&](int value) { x = 7; printf("\nValue: %d\t  x : %d", value, x);});
    printf("\nx is %d", x);

    int y = 10;

    a.ForEach(vecValues, [x, &y](int value) { y = 8; printf("\nValue: %d\t  x : %d y : %d", value, x, y);});
    printf("\nx is %d y is %d", x, y);

    return 0;
}