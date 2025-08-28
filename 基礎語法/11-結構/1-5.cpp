#include <iostream>

using namespace std;

struct student
{
    string name; //姓名
    int number; //座號
    int id; //學號
};

int main()
{
    //使用大括號給值
    student student_A = 
    {
        "David",
        18,
        410013,
    };
  
    // 使用成員運算子，取得student_A 內成員的值
    cout << student_A.name << " ";
    cout << student_A.number << " ";
    cout << student_A.id << endl;
  
    return 0;
}

