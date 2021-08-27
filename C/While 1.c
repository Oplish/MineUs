#include<stdio.h>
int main()
{
    printf("Hello world!");
    int n;
    while(scanf("%d",&n)){
       n=n*n;
       printf("%d",n);
    }
    return 0;
}