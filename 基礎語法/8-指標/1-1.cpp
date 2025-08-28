int cookies = 13;
int chips = 21;

// 宣告了兩個變數，code generation tool 幫我們安排了他們在記憶體中的位置

cout << "cookies value : " << cookies << endl;
cout << "chips value : " << chips << endl; 

//我們可以知道變數裡面的值，但是如果我們想知道它的位置呢 ? 
 
//此時就要使用取址運算子 ，表示為 &，是用來取得一個變數的位置的，使用方法如下 : 

cout << "cookies location : " <<&cookies << endl;
cout << "chips location : " << &chips << endl;
// 以上的程式會分別印出cookies 和 chips 在記憶體中的位置

