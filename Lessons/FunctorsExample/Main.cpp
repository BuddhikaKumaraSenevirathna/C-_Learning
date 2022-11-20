#include "A.cpp"

using namespace std;

int main()
{
    A a;
    B b;

    printf("%d\n", a(3));
    printf("%d\n", a(3, 5));
    printf("%d\n", b(3));

    int x = 6;
    printf("%d", a.GetNegativeNumber(x));
    
    return 0;
}