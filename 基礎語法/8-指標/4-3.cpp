#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int * a = new int;
    int * b = (int*)malloc(sizeof(int));
    
    *a = 10;
    *b = 20;
 
    cout << *a << endl;
    cout << *b << endl;
  
    delete a;
    free(b);
  
    cout << *a << endl;
    cout << *b << endl;

    return 0;
}

