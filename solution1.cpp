#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long count = 0, current = 0;
        count = k/n;
    if((k+count)%n!=0){
        cout<<k+count<<endl;
    }else{
        cout<<k+count+1<<endl;
    }
    }
    return 0;
}