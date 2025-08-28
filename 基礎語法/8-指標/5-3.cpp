#include <iostream>
using namespace std;

void swap_two_int(int & a, int & b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}



int main()
{
    int num_1 = 7;
    int num_2 = 23;
    
    cout << num_1 << " " << num_2 << endl;
    
    swap_two_int(num_1, num_2);
    
    cout << num_1 << " " << num_2 << endl;

    return 0;
}
