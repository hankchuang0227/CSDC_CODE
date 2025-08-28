#include <iostream>


using namespace std;

void henoi_tower(int height, char from, char destination, char storing)
{
    if(height == 0) return;
  
    henoi_tower(height - 1, from , storing, destination); //將起始柱子上面的圓盤全部移到暫存柱子    
    cout << "move 1 from rod : " << from << " to rod : " << destination << endl; //將最底下的圓盤移到目標柱子    
    henoi_tower(height - 1, storing , destination, from); //再將暫存移到目標柱子
}



int main()
{
    henoi_tower(2 ,'a' , 'c' , 'b');
    cout << endl;
    henoi_tower(3 ,'a' , 'c' , 'b');
    cout << endl;
    henoi_tower(4 ,'a' , 'c' , 'b');
  
    return 0;
}




