#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;   

int main(){
    int t; 
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int larger = max(a, b);
        int smaller = min(a, b);

        if(larger > smaller * 2 + 2){
            cout << "NO" << endl;
            continue;   
        }

        larger = max(c-a, d-b);
        smaller = min(c-a, d-b);

        if(larger > smaller * 2 + 2){
            cout << "NO" << endl;
            continue;   
        }

        cout << "YES" << endl;
    }
}

