#include<bits/stdc++.h>
using namespace std;
int main() {
	int l=0;
	char a[101];
	scanf("%s",&a);
	l= strlen (a);
	if(a[l-1]=='.') l--;
	for(int i=0;i<l/2;i++){
		if(a[i]!=a[l-1-i]) {
			printf("No");
			return 0;
	    }
	}
	cout<<"Yes";
}
