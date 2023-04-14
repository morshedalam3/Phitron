#include<stdio.h>
int main()

{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    int sumOfOdd=0;
    int sumOfEven=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]%2==0){
            sumOfEven+=ar[i];
        }else{
            sumOfOdd+=ar[i];
        }
    }
    printf("%d %d", sumOfEven,sumOfOdd);
    return 0;
}