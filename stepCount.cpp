//笛卡爾座標下，一個已知的原點到一個已知的目標點所需要的步數 
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

int main(){
	int n; //n:測試案列數目 
	scanf("%d",&n);
	for(int k=1; k<=n; k++){
		int x1,y1,x2,y2; // 源點和目標點的座標 
		scanf("%d%d%d%d",&y1,&x1,&y2,&x2);
		int t1=(x1+y1)*(x1+y1+1)/2+y1;
		int t2=(x2+y2)*(x2+y2+1)/2+y2;
		printf("Case %d: %d\n",k,t2-t1); //輸出源點到目標所需的步數 
	}
}
