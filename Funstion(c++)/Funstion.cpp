#include<iostream>
using namespace std;
bool Microsoft(){
	cout<<"Hello World\n";
}
int Google(){
	cout<<"Hello World\n";
}
void Tiu(){
	cout<<"Hello World\n";
}
bool GreenLand(){
	cout<<"Hello World\n";
	Tiu();
}
int main() {
	GreenLand();
	Google();
	Microsoft();
	return 0;
}
