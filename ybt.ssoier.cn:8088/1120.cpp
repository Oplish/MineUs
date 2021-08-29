#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n,x,y;
	int i,j;
    cin>>n;
	cin>>x>>y;
	for(i=1; i<=n; i++)
		printf("(%d,%d) ",x,i);
	cout<<endl;
	for(i=1; i<=n; i++)
		printf("(%d,%d) ",i,y);
	cout<<endl;

	for(i=1; i<=n; i++)
		for(j=1; j<=n; j++)
			if(x-y==i-j)
				printf("(%d,%d) ",i,j);
	cout<<endl;
	for(i=n; i>=1; i--)
		for(j=n; j>=1; j--)
			if(x+y==i+j)
				printf("(%d,%d) ",i,j);
	cout<<endl;
	return 0;
}
