#include <iostream>
using namespace std;

class A
{
public:
    union myUnion
    {
        int i1, i2;
        short y;
        char c1;
        char c2[5];
        int i[4];
    };

    void printValues(myUnion u)
    {
        printf("u.i1 = %d\n",u.i1);
        printf("u.i2 = %d\n",u.i2);
        printf("u.y = %d\n",u.y);
        printf("u.c1 = %c\n",u.c1);

        printf("u.c2[0] = %d\n",u.c2[0]);
        printf("u.c2[1] = %d\n",u.c2[1]);
        printf("u.c2[2] = %d\n",u.c2[2]);
        printf("u.c2[3] = %d\n",u.c2[3]);
        printf("u.c2[4] = %d\n",u.c2[4]);

        printf("u.i[0] = %d\n",u.i[0]);
        printf("u.i[1] = %d\n",u.i[1]);
        printf("u.i[2] = %d\n",u.i[2]);
        printf("u.i[2] = %d\n",u.i[3]);
    }
};