#include <iostream> 
#include<stdio.h>
using namespace std;

int main(){
	int a,b,n;
	cin>>a>>b>>n;
	int ans=1; //�}�l�n���ʵu�x��1�� 
	n-=b;	//���x�έn���ʪ��Z�� 
	int k=b-a;	//�C���ಾ�ʪ��̤j�Z�� 
	ans+=(n/k)*2;	//n/k�V�U����� 
	if(n%k){	//n/k�ݭn�V�W����� 
		ans+=2;
	}
	cout<<ans<<endl;	//�̤֭n���ʯx�Ϊ����� 
	return 0;
}
