#include <iostream>
#include <stdio.h>
using namespace std;
//�Q�ε��t�ƦC���D�M���� Sn=n*a1+(n*(n-1)/2)*d 
int main(){
	int n;
	cin>>n;
	int a=1;
	int sum=0;
	if(n>0){
		sum=n*(1+n)/2;	
	}
	else{
		sum=n*(1-n)/2;
	}
	cout<<sum<<endl;
	return 0;
}
