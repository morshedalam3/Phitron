#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n); 
int ar[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++) {
        if (ar[i] > 0) {
            ar[i] = 1;
        } else if(ar[i] == 0) {
            ar[i] = 0;
        }else{
            ar[i] =2;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}