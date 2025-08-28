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
    //student A : 
    student student_A;
    // 使用成員存取運算子，改變student_A 內成員的值
    student_A.name = "David";
    student_A.number = 18;
    student_A.id = 410013;
 
    //student_B : 
    student student_B;
    // 使用成員存取運算子，改變student_A 內成員的值
    student_B.name = "Judy";
    student_B.number = 27;
    student_B.id = 410102;
  
    // 使用成員存取運算子，取得student_A 內成員的值
    cout << student_A.name << " ";
    cout << student_A.number << " ";
    cout << student_A.id << endl;
  
    // 使用成員存取運算子，取得student_A 內成員的值
    cout << student_B.name << " ";
    cout << student_B.number << " ";
    cout << student_B.id << endl;

    return 0;
}

