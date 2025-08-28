int cookies = 13;
int chips = 21;

// 使用 & 運算子取得兩個變數在記憶體中的位置

cout << "cookies address : " << &cookies << endl;
cout << "chips address : " << &chips << endl; 

// 使用 * 運算子取得這兩個位置在記憶體中代表的值，也就是 cookies 跟 chips 的值

cout << "cookies value : " << *(&cookies) << endl;
cout << "chips value : " << *(&chips) << endl; 


