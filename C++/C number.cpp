#include<stdio.h>
#include<string.h>
#include<string>
int main()
{
    int n=2;
    int net=1;
    int data=1 ;
    while(printf("C number\n")){
       scanf("%d",&n);
       scanf("%d",&net);
       for(;data<=net;data++){
          n=n*n+data+n; 
       }
       printf("%d\n",n);
    }
    return 0;
}
