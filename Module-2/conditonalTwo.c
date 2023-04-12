#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>=100){
        printf("ami dhoni, birani khabo");
    }else if(tk>=50){
        printf("ami medium, ami kicori khabo");
    }else if (tk >= 20){
        printf("ami gorib, just akta ice khabo");
    }else{
        printf("ami zero");
    }
    return 0;
}