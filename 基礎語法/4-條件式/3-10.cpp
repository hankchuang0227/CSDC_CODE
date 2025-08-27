int some_user_input;
cin >> some_user_input;

int a = 5;
int b = 10;

//我們要依使用者輸入大小是否 > 50，對 a 或者是 b 做以下操作並輸出:
//(a or b) * (-1) + 15

//如果使用 if else，程式如下
 
if(some_user_input > 50){
	cout << a * (-1) + 15;
}else{
	cout << b * (-1) + 15;
}

//可看到 *(-1) + 15 的部分是被重複的，此時，可以用 ?運算子如下:

cout << (some_user_input > 50 ? a : b) * (-1) + 23  15;

//這就是問號運算子的強大，他可以在運算式中，選擇要用哪個運算元  
