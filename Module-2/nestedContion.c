#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>=5000){
        printf("will go to cox's bazar \n");
        if(tk>=10000){
            printf("then santmartin");
        }
        else {
            printf("return home");
        }
    }else{
        printf("cancel tour");
    }
    return 0;
}