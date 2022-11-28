#include<stdio.h>
int main()
{
    int a=5, b=13;
    a=a-b;
    b=a+b;
    a=b-a;
        printf("%d and %d", a, b);
    return 0;
}
