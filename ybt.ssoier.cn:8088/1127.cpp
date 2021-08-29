#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,m,k,A[100][100],B[100][100],C[100][100];
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	memset(C,0,sizeof(C));
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>A[i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<k;j++)
			cin>>B[i][j];
	for(int i=0;i<n;i++)
 	{
		for(int j=0;j<k;j++)
		{
			for(int k=0;k<m;k++)
			{
		 	    C[i][j]+=A[i][k]*B[k][j];
			}
			cout<<C[i][j]<<' ';
		}
		cout<<endl;
   }
	return 0;
}
