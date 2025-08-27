#include <iostream>
using namespace std;

int called_how_many_times = 0;

bool check_equal(int arg_1, int arg_2){
    called_how_many_times += 1;
    return (arg_1 == arg_2);
}

int main(){
    cout << "5 == 5 && check_equal(5,6) : " << (5 == 5 && check_equal(5,6)) << " called func " << called_how_many_times << " times" << endl;

    cout << "5 == 6 && check_equal(5,5) : " << (5 == 6 && check_equal(5,5)) << " called func " << called_how_many_times << " times" << endl;

    cout << "5 == 5 && check_equal(5,5) : " << (5 == 5 && check_equal(5,5)) << " called func " << called_how_many_times << " times" << endl;

    cout << "5 == 6 && check_equal(5,6) : " << (5 == 6 && check_equal(5,6)) << " called func " << called_how_many_times << " times" << endl;

    return 0;
}



