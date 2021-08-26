#include<iostream> 
#include<string>
using namespace std; 
int main(){ 
    string a;
    int i;
    cout << "输入字符串和数字" << endl;
    while(cin >> a){
        cin >> i;
        cout << a[i+1] << endl;
    }
} 