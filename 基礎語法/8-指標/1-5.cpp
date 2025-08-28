int cookies = 13; // 宣告一個變數
int candy = 24; // 宣告第二個變數
int * dessert; // 宣告一個指向int的指標
dessert = &cookies; // 將指標指向cookies

cout << "points to cookies\n";
cout << "cookies address : " << &cookies << endl;
cout << "candy address : " << &candy << endl;	
cout << "dessert value : " << dessert << endl;
cout << "cookies value : " << cookies << endl;
cout << "candy value : " << candy << endl;
cout << "dessert points to : " << *dessert << endl;
//可發現 &cookies 跟 dessert 的值相同，cookies的值跟 *dessert 相同

cout << "\npoints to candy\n";
dessert = &candy; // 將指標指向candy

cout << "cookies address : " << &cookies << endl;
cout << "candy address : " << &candy << endl;
cout << "dessert value : " << dessert << endl;
cout << "cookies value : " << cookies << endl;
cout << "candy value : " << candy << endl;
cout << "dessert points to : " << *dessert << endl;
//可發現 &candy 跟 dessert 的值相同，candy的值跟 *dessert 相同

