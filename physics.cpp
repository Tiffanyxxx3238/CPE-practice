//一個粒子有初速度(v0)和加速度(a)。如果在t秒時這個例子的速度為v，在2t秒時這個例子的總位移為多少 
//粒子的速度v=v0+at，位移公式s=v0t+1/2at^2(以2t帶入t位置計算) =>2*v*t為此計算後得出的簡化 
#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
	int v,t;
	while(scanf("%d%d",&v,&t) !=EOF) //scanf 函數讀取輸入的 v 和 t
	//!=EOF 是一個比較表達式，它用於檢查 scanf 函數是否成功讀取了輸入。
	//這個循環確保程式會持續讀取用戶的輸入，直到用戶停止輸入或者有其他錯誤發生
	 if (v >= -100 && v <= 100 && t >= 0 && t <= 200) {
            // 計算並輸出結果
            printf("%d\n", 2 * v * t);
        } else {
            // 超出範圍的輸入，提示用戶重新輸入
            printf("輸入不在合法範圍內，請重新輸入。\n");
        }
	return 0;
} 
