
int cookies = 13; // 宣告一個變數
int * cookies_pointer; // 宣告一個指向int的指標

cookies_pointer = &cookies; // 將指標的值設為cookies的位置

cout << "cookies address : " << &cookies <<    endl; // 印出cookies在記憶體中的位置

cout << "cookies_pointer value : " << cookies_pointer <<endl; 
//印出指標的內容，也就是cookies這個變數的位置

//可發現兩個cout印出的結果相同

cout << "cookies value : " << cookies << endl;  //印出 cookies 的值

cout << "cookies value : " << *(&cookies) << 22  endl;  
//如剛剛講的，以*運算子取得 cookies位置內的值，一樣可以24  得到cookies的值

cout << "cookies_pointer point to : " << *cookies_pointer << endl; 
//既然 cookies_pointer 的值就是 cookies 的位置，那 *cookies_pointer 便也可以得到 cookies 的值 


