#include<iostream>
using namespace std;
int ol[99],Siri[99],jh=0,lo=0;
int Oplish(int Google) {
	int l=0;
	for(int i=1;i<=Google;i++){
		l=l+i;
	}
	return l;
}
int main() {
	int a;
	cin>>a;
	cout<<Oplish(a);
}
