#include <iostream>
#include <cstdlib>

int * Cpp_style_malloc; 

int main()
{
    Cpp_style_malloc = new int;
    int * C_style_malloc = (int*)malloc(sizeof(int));

    return 0;
}
