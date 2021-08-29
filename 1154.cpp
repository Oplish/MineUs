#include<iostream>
using namespace std;
int judge(int n);
int main()
{
    long int i;
    for(i=1;; i++)
    {
        if( i==judge(judge(i)) && i!=judge(i) )
        {
            cout<<i<<" "<<judge(i)<<endl;
            break;
        }
    }
    return 0;
}
int judge(int n)
{
    long int sum=0;
    long int i;
    for(i=1; i<n/2+1; i++)
        if(n%i==0)
            sum+=i;
    return sum;
}
