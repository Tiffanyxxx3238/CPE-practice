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
	cout << "a+b�����G��:" <<ans; 
}
void askb(){
		cout <<"��J���b:(b<=10)";
		cin >>b;
	if(b<=10){
		count();
	}
	else{
		askb();
	}
}
void aska(){
	cout << "��J���a(0<=a):";
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
