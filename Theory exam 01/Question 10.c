#include<stdio.h>
int main()
{
    int n,i, check=0;
    scanf("%d", &n);
    for(i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            check=1;
            break;
        }
    }
    if(check==0)
        printf("Prime");
    else
    printf("Composite");

    return 0;
}
