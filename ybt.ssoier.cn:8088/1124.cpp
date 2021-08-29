#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,m,A[100][100],B[100][100];
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>B[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<A[i][j]+B[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
