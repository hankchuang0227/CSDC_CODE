#include <iostream>
using namespace std;



int main()
{
    int numbers[5] = {10, 20, 30, 40, 50}; 
    string word = "hello world";
  
    int * num_ptr_1;
    int * num_ptr_2;
  
    const char * word_ptr_1;
    const char * word_ptr_2;
  
    int element;
  
    num_ptr_1 = &numbers[0]; 
    //將 pointer指向number[0]，也就是 10的位置

    num_ptr_2 = &numbers[3]; 
    //將 pointer指向number[3]，也就是 40的位置

    element = num_ptr_2 - num_ptr_1; 
    //將兩 pointer 相減，得到兩個 pointer之間差了 3個整數

    cout << "There are " << element << " elements between num_ptr_1 and num_ptr_2\n";
  
    num_ptr_1 = &numbers[2]; 
    //將 pointer指向number[2]，也就是 30的位置

    num_ptr_2 = &numbers[1]; 
    //將 pointer指向number[1]，也就是 20的位置

    element = num_ptr_2 - num_ptr_1; 
    //將兩兩 pointer 相減，得到 -1
    cout << "There are " << element << " elements between num_ptr_1 and num_ptr_2\n";    
  
    word_ptr_1 = &word[1]; 
    //將 pointer指向word[1]，也就是字串中 'e' 的位置

    word_ptr_2 = &word[5]; 
    //將 pointer指向word[5]，也就是字串中 ' ' 的位置

    element = word_ptr_2 - word_ptr_1; 
    //將兩 pointer 相減，得到兩個 pointer之間差了 4個字元
    cout << "There are " << element << " characters between word_ptr_1 and word_ptr_2\n";    
  
    word_ptr_1 = &word[7]; 
    //將 pointer指向word[1]，也就是字串中第二個'o'的位置
    
    word_ptr_2 = &word[4]; 
    //將 pointer指向word[5]，也就是字串中第一個'o'的位置

    element = word_ptr_2 - word_ptr_1; 
    //將兩 pointer 相減，得到兩個 o之間差了 -3個字元
    cout << "There are " << element << " characters between word_ptr_1 and word_ptr_2\n";    

    return 0;
}

