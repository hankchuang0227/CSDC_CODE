#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b == 0) 
    {
        return a;
    }
    return gcd(b , a % b);
}


int main()
{
  
    cout << gcd(48,32) << endl;
  
    cout << gcd(100, 75) << endl;
  
    cout << gcd(126, 72) << endl;
  
    return 0;
}







