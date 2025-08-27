#include <iostream>

int main(){
    int cout = 10; //看不到std裡面的cout，因此是合法的
    std::cout << cout; //呼叫std的cout並把變數的cout當參數傳進去

    return 0;
}
