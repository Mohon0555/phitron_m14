#include<stdio.h>
int main()
{
    long long int n;
    int sum=0,rem;
    scanf("%llf", &n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d", sum);
    return 0;
}
