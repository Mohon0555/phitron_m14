#include<stdio.h>

int main(){

int n,i;
scanf("%d", &n);
for(i=0;i=(n!=1);i++)
{
    if(n%2==0)
        n=n/2;
    else
        n=n-1;
        printf("%d ",n);
}

return 0;
}
