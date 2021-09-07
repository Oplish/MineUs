#include<iostream>
using namespace std;
int Oplish(long long Sort){
	if(Sort==1){
		return 1;
	}
	if(Sort>=2){
		return Oplish(Sort-1)+Sort;
	}
}
int main(){
	long long Fn;
	cin>>Fn;
	cout<<Oplish(Fn);
}
