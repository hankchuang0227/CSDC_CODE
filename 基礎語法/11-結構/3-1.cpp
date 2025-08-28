#include <iostream>
using namespace std;

struct Enemy
{
    string name;
    int health;
    int damage;
};

void damage_enemy_with_copy(Enemy tar_enemy)
{
    tar_enemy.health -= 3; //不會影響到 function 外
}

void damage_enemy_with_ptr(Enemy * tar_enemy)
{
    tar_enemy->health -= 3; //會影響到 function 外
}

void damage_enemy_with_reference(Enemy & tar_enemy)
{
    tar_enemy.health -= 3; //會影響到 function 外
}

int main()
{
    Enemy zombie = 
    {
        "zombie",
        20,
        4
    };
    cout << zombie.health << endl;
  
    damage_enemy_with_copy(zombie);
    cout << zombie.health << endl; //血量沒有減少
  
    damage_enemy_with_ptr(&zombie);
    cout << zombie.health << endl; //血量正常減少了
   
    damage_enemy_with_reference(zombie);
    cout << zombie.health << endl; //血量正常減少了
  
    return 0;
}

