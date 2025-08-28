#include <iostream>

using namespace std;


struct student
{
    string name; //姓名
    int number; //座號
    int id; //學號
};

student students_array[3] = 
{
    {
        "Mark",
        15,
        410242
    },
  
    {
        "Leo",
        12,
        410202
    },
  
    {
        "James",
        3,
        410112
    },
  
};

int main()
{   
    for(int student_count = 0 ; student_count < 3 ; student_count += 1)
    {
            cout << students_array[student_count].name 
            << " ";
            cout << students_array[student_count].number 
            << " ";
            cout << students_array[student_count].id << 
            endl;
    }
  
    return 0;
}
