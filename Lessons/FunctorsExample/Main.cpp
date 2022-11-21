#include "A.cpp"
#include "C.h"

using namespace std;

int main()
{
    A a;
    B b;

    printf("\n======Test Class A==========\n");
    printf("%d\n", a(3));
    printf("%d\n", a(3, 5));
    printf("Negative number is : %d\n", a.GetNegativeNumber(6));

    printf("\n======Test Class B==========\n");
    printf("Negative number is : %d\n", b(3));
    printf("X value is : %d\n", b.x);

    printf("\n======Test Struct C==========\n");
    Person p;
    p(32);
    printf("Age is : %d\n", p.age);
    
    return 0;
}