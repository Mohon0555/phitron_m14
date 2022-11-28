#include<stdio.h>

int main()
{
    int i,j, temp;
    int ara[8]= {12,7,9,3,15,2,6,5};


    for(i=0; i<8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");


    for(j=0; j<8; j++)
    {
        for(i=0; i<8; i++)
        {
            if(ara[i]> ara[i+1])
            {
                temp = ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }

    }


    for(i=0; i<8; i++)
    {
        printf("%d ", ara[i]);
    }
    return 0;
}
