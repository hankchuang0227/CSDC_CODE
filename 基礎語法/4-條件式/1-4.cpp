#include <bits/stdc++.h>
using namespace std;

int main(){
    int trys = 1;
    int start = 1;
    int end = 100;

    srand(time(0)); //設定隨機種子碼為現在時間
    int number = (rand()) % (end - start + 1) + start;
    // 隨機產生在範圍內的數字	

    int num_guess;
  
    cout << "guess_the_number_between_" << start << "_and_" << end << endl;
  	
    while (true){
        cin >> num_guess;

        if(num_guess > number){
            cout << "to_big" << endl; 
        }else{
            if(num_guess < number){
                cout << "to_small" << endl;
            }else{
                cout<<"you_guess_the_number_it's:" << number << " you_took_" << trys << "_tries" << endl;
                break;
            }	
        }
        trys += 1;
    }
}
