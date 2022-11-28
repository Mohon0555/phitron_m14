#include<stdio.h>
#include<string.h>

int main()
{
    char s[102], t[102];
    int i;
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    for (i=0;i<strlen(s);i++){

    }
    for(i=0;i<strlen(s)-1;i++){
        if(s[i]>t[i]){
            printf("1\n");
            return 0;
        }
        else if(s[i]<t[i]){
            printf("-1\n");
            return 0;
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}
