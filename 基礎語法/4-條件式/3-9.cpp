#include <iostream>
using namespace std;
int max_func(int a, int b){ //使用者提供 a,b
    cout << "enter max func" << endl;
    return (a > b ? a : b); // a > b 為真時，回傳前者 a 反之回傳b
}

int min_func(int a, int b){ //使用者提供 a,b
    cout << "enter min func" << endl;
    return (a < b ? a : b); // a < b 為真時，回傳前者 a 反之回傳b
}

int main(){
    int num1,num2;
    int get_max_or_min; // 0 : max , 1 : min
    cout << "choose get min or max \n0 for max 1 for min : ";
    cin >> get_max_or_min;
    cout << endl;
    cout << "enter two number : ";
    cin >> num1 >> num2;
    cout << endl << (get_max_or_min == 0 ? 
    max_func(num1,num2) : min_func(num1,num2)); 
    // get_max_or_min 為 0 時，會呼叫 max_func 並以它的回傳值為結果，反之則呼叫 min_func
    
    
    return 0;
}
