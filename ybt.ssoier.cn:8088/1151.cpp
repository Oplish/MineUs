#include<iostream>
using namespace std;
int Oplish(int Google) {
	bool With=true;
	int p=0;
	for(int i=2;i<=Google;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				With=false;
				break;
			}
			With=true;
		}
		if(With==false){
			With=true;
			continue;
		}
		p++;
	}
	return p;
}
int main() {
	int t;
	cin>>t;
	cout<<Oplish(t);
}
