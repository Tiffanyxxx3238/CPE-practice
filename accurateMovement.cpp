#include <iostream> 
#include<stdio.h>
using namespace std;

int main(){
	int a,b,n;
	cin>>a>>b>>n;
	int ans=1; //開始要移動短矩形1次 
	n-=b;	//長矩形要移動的距離 
	int k=b-a;	//每次能移動的最大距離 
	ans+=(n/k)*2;	//n/k向下取整數 
	if(n%k){	//n/k需要向上取整數 
		ans+=2;
	}
	cout<<ans<<endl;	//最少要移動矩形的次數 
	return 0;
}
