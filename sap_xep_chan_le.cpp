#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0; i <= n/2; i++){
            if( i < n/2 ){
                if( n % 2 == 0) cout << a[i] << " " << a[n/2 + i] << " ";
                else cout << a[i] << " " << a[n/2 + 1 + i] << " ";
            }
            if( n % 2 != 0 && i == n/2) cout << a[i];
        }
        cout << endl;
    }
}