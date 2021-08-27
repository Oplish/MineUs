#include<stdio.h>
int main()
{
    int n;
    int net ;
    int data=1 ;
    while(printf("Hello world!\n")){
       scanf("%d",&n);
       scanf("%d",&net);
       for(;data<=net;data++){
          n=n*n; 
       }
       printf("%d\n",n);
    }
    return 0;
}