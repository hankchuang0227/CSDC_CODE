#include <iostream>
using namespace std;

struct Enemy
{
    string name;
    int health;
    int damage;
};

int main()
{
    Enemy enemy_piglin = 
    {
        "piglin",
        16,
        12
    };
  
    Enemy * piglin_ptr = &enemy_piglin;
  
  
    //以下皆可得相同的結果
  
    //使用成員存取運算子 : 
    cout << enemy_piglin.name << endl;
    cout << enemy_piglin.health << endl;
    cout << enemy_piglin.damage << endl;
  
    //使用 * 運算子 和 成員存取運算子 : 
    cout << (*piglin_ptr).name << endl;
    cout << (*piglin_ptr).health << endl;
    cout << (*piglin_ptr).damage << endl;
  
    //使用指標成員存取運算子 : 
    cout << piglin_ptr -> name << endl;
    cout << piglin_ptr -> health << endl;
    cout << piglin_ptr -> damage << endl;
  
 
    //使用指標成員存取運算子改變成員的值 : 
    piglin_ptr -> health = 1;
  
    cout << enemy_piglin.health << endl;
    cout << piglin_ptr -> health << endl;
  
  
    //除了直接指向Enemy Object外
    //也可以使用 new 來產生新的 Enemy Object : 
    Enemy * zombie_ptr = new Enemy
    {
        "zombie",
        20,
        4
    };
  
    //使用指標成員存取運算子 : 
    cout << zombie_ptr -> name << endl;
    cout << zombie_ptr -> health << endl;
    cout << zombie_ptr -> damage << endl;
  
    delete zombie_ptr;
    zombie_ptr = nullptr;
  
    return 0;
}