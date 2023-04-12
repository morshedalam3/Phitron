#include <stdio.h>
int main()
{
    // Arithmetic operator +,-,*,/,%;
    // Relational operator: <,>,!=,<=,>=, ==,
    // logical operator: &&, ||;
    int a=20;
    int b=3;
    int sum=a+b;
    int mns=a-b;
    int mlt = a*b;
    int mod = a%b;
    int dvd = a/b;
    float dvdFloat = a*1.0/b;
    printf("a + b = %d \n a-b=%d \n a*b=%d \n a%%b=%d\n a/b=%d \n a/b=%f ",sum,mns,mlt,mod,dvd,dvdFloat);
    return 0;
}