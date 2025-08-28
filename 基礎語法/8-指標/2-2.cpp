#include <iostream>

using namespace std;
void print_every_2_char(const char* word_start)
{
    while(*(word_start) != 0)
    {
        cout << *word_start;
        word_start += 1;
        if(*(word_start) == 0)
        {
            break;
        }
        word_start += 1;
    }
    cout << endl;
  
  
}

int main()
{
    print_every_2_char("abcdef");
    print_every_2_char("hello world");
    return 0;
}

