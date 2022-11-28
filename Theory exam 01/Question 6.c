#include<stdio.h>

int main()
{
    int frist_num, second_num;

    printf("Enter the first number:");
    scanf("%d", &frist_num);
    printf("Enter the second number:");
    scanf("%d", &second_num);

    if(second_num%frist_num==0)
        printf("The second number is divisible by the first number.");
    else
        printf("None of them are divisible by the other.");
    return 0;
}
