#include <iostream>
using namespace std;

int f(int a, int b){
    return a+b;
}

int main(){
    int a, b;  
	
    cin >> a >> b;
   cout << f(a, b) << ‘\n’;
	
    return 0;
}
