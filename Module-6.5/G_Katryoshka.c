// #include<stdio.h>

// int main()
// {
//     int a,b,c,max=0,min=0,eye,body;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a<b && b<c){
//       min=a;
//     }else if(b<c && c<a){
//       min=b;
//     }else if(c<a && a<b){
//       min=c;
//     }
//     if(a==min ){
//       max=a;
//     }else if(b==min){
//          eye=a-b;
//          body=c-b;
//         eye=eye/2;
//         if(eye>=body){
//           max=min+body;
//         }else{
//             max=min+eye;
//         }
//     }else{
//        max=c;
//     }
//     printf("%d\n",max);
//     return 0;
// }

#include <stdio.h>
int main()

{
  long long int e,m,b,res=0;
  scanf("%lld %lld %lld", &e,&m,&b);
  if(e==0 || m ==0)
  {
    printf("0\n");
  }else{
    long long int min = e;
    if(m<min){
      min=m;
    }
    if(b<min){
      min=b;
    }
    e-=min;
    m-=min;
    b-=min;
    res+=min;
    if(e/2<b){
    res+=e/2;
    }else{
      res+=b;
    }
    printf("%lld\n",res);
  }
  return 0;
}