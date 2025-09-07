#include<bits/stdc++.h>
using namespace std;

int main(){
   int a, b, n;
   cout << "輸入兩個整數:" ;
   cin >> a >> b;
   for(n=a; n>=1; n--){
       if(a%n==0 && b%n==0){
            break;
        }
    }
    cout << "GCD = " << n << endl;
}



