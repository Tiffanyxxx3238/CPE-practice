#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int myNum[8] = {-7, -5, -3, -1, 2, 4, 5, 8};
	//�t�@�ث��(�]����t�Ψ⥿�����i��)
	for(int k=0;k<=3;k++){
		for(int i=7;i>=4; i--){
			if(myNum[k]+myNum[i]==0){
				cout<<myNum[k]<<"+"<<myNum[i]<<"�M��0\n";
			}
			else{
			}
		}
	} 
/*	�ۦ�g�X������ 
	for(int k=0;k<=7;k++){
		for(int i=k+1;i<=7;i++){
			if(myNum[k]+myNum[i]==0){
				cout<<myNum[k]<<"+"<<myNum[i]<<"�M��0\n";
			}
			else{
			}
	}
	}*/
	return 0;
} 
