#include <bits/stdc++.h>
using namespace std;
int a[30][30]={0};
int main()
{
	int n,d,x,y;
	cin>>n;
	d=1,x=0,y=n-1;
	a[x][y]=1; 
	while(d<n*n)
	{
		while(x<n-1&&!a[x+1][y])
			a[++x][y]=++d;		
		while(y>0&&!a[x][y-1])
				a[x][--y]=++d;	
		while(x>0&&!a[x-1][y])
			a[--x][y]=++d;
		while(y<n-1&&!a[x][y+1])
			a[x][++y]=++d;	
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			cout<<a[i][k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

