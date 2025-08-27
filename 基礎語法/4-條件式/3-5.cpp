#include <iostream>
using namespace std;
int main()
{
    
    int num;
    cout << "we are going to count down from ( 1 ~ 5 ) : ";
    cin >> num;
    
    switch(num)
    {
        case 5:
        cout << "five!\n";
        case 4:
        cout << "four!!\n";
        case 3:
        cout << "three!!!\n";
        case 2:
        cout << "two!!!!\n";
        case 1:
        cout << "one!!!!!\n";
        
        cout << "time's up !!!!!! \n";
        
        
    }

    return 0;
}



