#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<long> sum(5);
    vector<long> arr(5);
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    sum[0]=arr[0]+arr[1]+arr[2]+arr[3];//10
    sum[1]=arr[0]+arr[1]+arr[2]+arr[4];//11
    sum[2]=arr[0]+arr[1]+arr[4]+arr[3];//12
    sum[3]=arr[0]+arr[4]+arr[2]+arr[3];//13
    sum[4]=arr[4]+arr[1]+arr[2]+arr[3];//14
}
long c,d,aux;
        for(c = 0; c < 5; c++){
                for(d = 0; d < 5; d++){
                        if(sum[d] < sum[c]){
                                aux = sum[c];
                                sum[c] = sum[d];
                                sum[d] = aux;
                                }}}  
        cout << sum[4] <<" " << sum [0] <<endl ;
    return 0;
}
