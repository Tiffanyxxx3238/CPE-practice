#include <bits/stdc++.h> //包括了幾乎所有的標準C++庫
using namespace std; //減少前綴std

int main(){
    ios::sync_with_stdio(0);//加速 cin 和 cout
    cin.tie(0);//避免在每次輸入前強制刷新輸出
    
    int t;//測試案例
    cin>>t;
    while(t--){
        int r;//親戚
        cin>>r;
        
        int v[501]={};//題目給親戚數量最多500
        int result = 0;//存放最小距離
        
        for(int i=0; i<r; i++){//依次讀取親戚住址並存入陣列
            cin>>v[i];
        }
        
        sort(v,v+r);//排序
        int mid=v[r/2];//找中位數
        
        for(int i=0;i<r;i++){//中位數到每個親戚住址的距離
            result+=abs(mid-v[i]);
        }
        cout<<result<<"\n";
    }
    return 0;
}
