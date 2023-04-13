 #include <stdio.h>
 int main()
 {
     int n;
     scanf("%d", &n);
     int arr[n];
     for(int i = 0; i < n; i++)
     {
       scanf("%d", &arr[i]);
     }
     int sum = 0;
     for(int i = 0; i<n; i++)
     {
        sum += arr[i];
     }
    //  for(int i = 0; i < n; i++)
     {
        printf("%d\n",sum);
     }
//     int arrayName[] = {1, 2, 3};
// printf("%d", arrayName[2]); // Output: 3

     return 0;
 }
