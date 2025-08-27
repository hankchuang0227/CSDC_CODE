#include <iostream>
using namespace std;

int main(){
	int arr1[7]; = {}	
	//宣告型別為int長度為7的陣列並初始化
	
	int n=5;
	char arr2[n] = {'a','b','c','d','e'}
	//宣告類別為char長度為n(10)的陣列並逐一初始化

	char arr3[] = "Hello"
	//宣告類別為string(C-style)長度為6的陣列，結尾會自動補’\n’因此如果要限定長度要多留一格
	
	for(int i=0 ; i<7 ; i++){	   //連續輸入並依序儲存在arr1
		cin >> arr1[i];
	}
}	


