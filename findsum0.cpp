#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int myNum[8] = {-7, -5, -3, -1, 2, 4, 5, 8};
	//另一種思路(因為兩負或兩正都不可行)
	for(int k=0;k<=3;k++){
		for(int i=7;i>=4; i--){
			if(myNum[k]+myNum[i]==0){
				cout<<myNum[k]<<"+"<<myNum[i]<<"和為0\n";
			}
			else{
			}
		}
	} 
/*	自行寫出的部分 
	for(int k=0;k<=7;k++){
		for(int i=k+1;i<=7;i++){
			if(myNum[k]+myNum[i]==0){
				cout<<myNum[k]<<"+"<<myNum[i]<<"和為0\n";
			}
			else{
			}
	}
	}*/
	return 0;
} 
