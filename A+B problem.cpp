#include <iostream>
using namespace std;
int a;
int b;
int ans;
void aska();
void askb();
void count();
void count(){
	ans=a+b;
	cout << "a+b的結果為:" <<ans; 
}
void askb(){
		cout <<"輸入整數b:(b<=10)";
		cin >>b;
	if(b<=10){
		count();
	}
	else{
		askb();
	}
}
void aska(){
	cout << "輸入整數a(0<=a):";
	cin >>a;
	if(a>=0){
		askb();
	}
	else{
		aska();
	}
}
int main(int argc, char** argv) {
	aska();
	return 0;
}
