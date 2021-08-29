#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,m,A[100][100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[j][i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
