#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int mod = a % 2;
    if(mod == 0){
        printf("even");
    }else{
        printf("odd");
    }
    return 0;
}