#include "A.h"

int main()
{
    printf("\n================== Union Example ==================\n");

    A a = A();
    A::myUnion u1;

    printf("size of int     : %ld\n", sizeof(int));
    printf("size of short   : %ld\n", sizeof(short));
    printf("size of char    : %ld\n", sizeof(char));
    printf("size of char[5] : %ld\n", sizeof(char[5]));
    printf("size of int[4]  : %ld\n", sizeof(int[4]));

    printf("\nunion size      : %ld\n", sizeof(u1));

    printf("\n========== i1 = 65 ===========\n");
    u1.i1 = 65;
    a.printValues(u1);
    
    printf("\n========== i1 = 257 ===========\n");
    u1.i1 = 257;
    a.printValues(u1);

    return 0;
}