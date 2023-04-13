 #include <stdio.h>
int main()
 {
    long long int n;
    scanf("%lld", &n);
    long long ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &ar[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ar[i];
    }
    if(sum<0){
        sum=sum * -1;
        printf("%lld", sum);
    }else{
        printf("%lld", sum);
    }
    return 0;
}
//  int main()
//  {
//      int n;
//      scanf("%d", &n);
//      int arr[n];
//      for(int i = 0; i < n; i++)
//      {
//        scanf("%d", &arr[i]);
//      }
//      int sum = 0;
//      for(int i = 0; i<n; i++)
//      {
//         sum += abs(arr[i]);
//      }
//      {
//         printf("%d\n",sum);
//      }

//      return 0;
//  }
