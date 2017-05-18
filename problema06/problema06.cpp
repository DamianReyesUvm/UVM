#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float d=0,ne=0,z=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
        if (arr[arr_i]>0)
        d=d+1;
        else if (arr[arr_i]<0)
        ne=ne+1;
        else
        z=z+1;
    }
    cout << d/n<<endl;
    cout << ne/n<<endl;
    cout << z/n<<endl;
    return 0;
}
