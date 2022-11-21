#include<stdio.h>

int main()
{
    int i,j;
    int ara[8]= {8,4,2,6,9,34,7,5};
    int sort_ara[8];
    int min;
    int m_ind;

    for(i=0; i<8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
    for(j=0; j<8; j++)
    {
        min= ara[0];
        m_ind=0;
        for(i=0; i<8; i++)
        {
            if(ara[i]<min)
            {
                min=ara[i];
                m_ind=i;
            }
        }
        sort_ara[j]=min;
        ara[m_ind]=9090;

    }

    for(i=0; i<8; i++)
    {
        printf("%d ", sort_ara[i]);
    }

    return 0;
}
