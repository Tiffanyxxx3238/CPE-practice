//�åd���y�ФU�A�@�Ӥw�������I��@�Ӥw�����ؼ��I�һݭn���B�� 
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

int main(){
	int n; //n:���ծצC�ƥ� 
	scanf("%d",&n);
	for(int k=1; k<=n; k++){
		int x1,y1,x2,y2; // ���I�M�ؼ��I���y�� 
		scanf("%d%d%d%d",&y1,&x1,&y2,&x2);
		int t1=(x1+y1)*(x1+y1+1)/2+y1;
		int t2=(x2+y2)*(x2+y2+1)/2+y2;
		printf("Case %d: %d\n",k,t2-t1); //��X���I��ؼЩһݪ��B�� 
	}
}
