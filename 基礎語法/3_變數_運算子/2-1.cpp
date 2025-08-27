#include <iostream>
using namespace std;

int a = 10;				//全域變數

void f1(){
    int a = 0;				//同名，區域變數遮蔽全域變數
	
   a += 50;
   cout << a << ‘\n’;
}

void f2(){
   cout << a + 50 << ‘\n’;	//無同名區域變數，使用全域變數
}

namespace f3{				//命名空間
int a = 20;			//命名空間變數
	
    void printa(){			//命名空間函式
        cout << a << ‘\n’;
    }
}

namespace f4{
    int a = 30;
	
    void printa(){
       cout << a << ‘\n’;
   }
}

int main(){
    f1();			//output:50
    f2();			//output:60
    f3::printa();	//output:20
    f4::printa();	//output:30
}

