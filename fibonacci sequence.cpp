#include <iostream>//費式數列計算
 
using namespace std; 
int a=1;//F1=1 
int b=1;//F2=1
int F;
int main(int argc, char** argv) {
	cout<<a<<" ";
	cout<<b<<" ";
	for(int i=3;i<=5;i++){//顯示前5個，所以<=5 
		F=a+b;
		a=b;
		b=F;
		cout<<F<<" ";
	}
}
