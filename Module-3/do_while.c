// #include<stdio.h>
// int main()
// {
//     int i=10;
//    do{
//     printf("%d\n",i);
//     i++;
//    }
//    while(i<=9);
//     return 0;
// }
// quiz output 5 5
// #include <stdio.h>
// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         a++;
//         continue;
//     }
//     printf("%d %d",i,a);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        continue;
        a++;
    }
    printf("%d %d",i,a);
    return 0;
}