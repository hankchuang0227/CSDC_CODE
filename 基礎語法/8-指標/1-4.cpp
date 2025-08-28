int cookies = 13; // 宣告一個變數
int * cookies_pointer = &cookies; // 宣告一個指向  int的指標

cout << "cookies val : " << cookies << endl;
cout << "cookies_pointer points to : " << *cookies_pointer << endl;

cookies = cookies + 1; //將 cookies 的值 + 1 
cout << "increase cookies by 1\n";
cout << "cookies val : " << cookies << endl; 
cout << "cookies_pointer points to : " << *cookies_pointer << endl; 
    
*cookies_pointer = *cookies_pointer + 1; 
//將 cookies_pointer指向的變數值 + 1 得到與上面相同的結果 

cout << "increase what cookies_pointer points to 20  by 1\n";
cout << "cookies val : " << cookies << endl;
cout << "cookies_pointer points to : " << *cookies_pointer << endl;

