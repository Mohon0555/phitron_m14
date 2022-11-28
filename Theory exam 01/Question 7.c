#include<stdio.h>

int main()
{
    int frist_num, second_num,i,gcd;
    scanf("%d %d", &frist_num, &second_num);

    for(i=1; i<= frist_num && i<=second_num; i++)
        if(frist_num%i==0 && second_num%i==0)
            gcd=i;
    printf("The GCD of %d and %d is %d", frist_num, second_num, gcd);
    return 0;
}
