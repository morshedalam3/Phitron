#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int mns=a-b;
    if(a>b){
      printf("%d",mns);
    }else{
        printf("%d",0);
    }
}