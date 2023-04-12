#include<stdio.h>

int main()
{
    int a,b,c,max=0,min=0,eye,body;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c){
      min=a;
    }else if(b<c && c<a){
      min=b;
    }else if(c<a && a<b){
      min=c;
    }
    if(a==min ){
      max=a;
    }else if(b==min){
         eye=a-b;
         body=c-b;
        eye=eye/2;
        if(eye>=body){
          max=min+body;
        }else{
            max=min+eye;
        }
    }else{
       max=c;
    }
    printf("%d\n",max);
    return 0;
}