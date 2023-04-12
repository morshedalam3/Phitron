#include<stdio.h>
int main()
{
    int i;
    // without 5
    // for(i=1;i<=10;i++)
    // {
    //    if(i==5){
    //      continue;;
    //    }
    //    printf("%d \n",i);
    // }

    // with 5
    for(i=1;i<=10;i++)
    {
        printf("%d \n",i);
        if(i==5){
        continue;
       }
      
    }
    
    return 0;
}