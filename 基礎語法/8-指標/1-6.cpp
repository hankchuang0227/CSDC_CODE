int cars = 3;
double oil = 11.2;
bool lever = true;
     
int *cars_pointer = &cars;
double *oil_pointer = &oil;
bool *lever_pointer = &lever;
    
cout << "car address : " << &cars << " ,cars_pointer value : " << cars_pointer << endl;
cout << "car val : " << cars << " ,cars_pointer point to : " << *cars_pointer << endl;
  
cout << "oil address : " << &oil << " ,oil_pointer value : " << oil_pointer << endl;
cout << "oil val : " << oil << " ,oil_pointer point to : " << *oil_pointer << endl;

cout << "lever address : " << &lever << "  ,lever_pointer value : " << lever_pointer << endl;
cout << "lever val : " << (lever ? "true" : "false") << " ,lever_pointer point to : " << (*lever_pointer ? "true" : "false" ) << endl;
// 由於cout在列印 bool 時，會以整數的形式列印(1 == true , 0 == false) 故特別處理使cout 印出 “true” 跟 “false”
    
int **cars_pointer_pointer = &cars_pointer; //當然，也可以是指向一個 pointer 的pointer
cout << "cars_pointer_pointer_value : " << 
cars_pointer_pointer << endl; //與 &cars_pointer相同
cout << "cars_pointer_pointer points to : " << *cars_pointer_pointer << endl; //與 cars_pointer相同 
cout << "cars_pointer_pointer points to points to : " << **cars_pointer_pointer << endl; //與 *cars_pointer、cars相同

