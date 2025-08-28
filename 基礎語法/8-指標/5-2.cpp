#include <iostream>
using namespace std;

int main()
{
    int rats;
    
    int & rats_reference = rats; //產生一個 rats 的參考
    
    //rats改變 參考也改變
    rats = 10;
    cout << rats << endl;
    cout << rats_reference << endl;
    
    
    //rats參考改變 rats也改變
    rats_reference = 12;
    cout << rats << endl;
    cout << rats_reference << endl;
    
    
    int mouse = 23;
    
    //若將參考等於另一個變數呢 ? 
    rats_reference = mouse;
    
    //rats 跟 參考皆改變 rats_reference = mouse 跟 rats = mouse 意思相同
    cout << rats << endl;
    cout << rats_reference << endl;      
    
    //mouse 改變並不會影響到 rats 或 參考
    mouse = 0; 
    cout << rats << endl;
    cout << rats_reference << endl;
    
    
    //印出 rats的位址 和 參考的位址，可得相同的位址
    cout << &rats << endl;
    cout << &rats_reference << endl;
    
    //rats_reference 就是 rats

    return 0;
}
