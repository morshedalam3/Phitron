#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    int mns = a-b;
    int mlt = a*b;
    float dvd = a/b;
    printf("%d %d %d %0.2f ", sum,mns,mlt,dvd);
    return 0;
}