int data_amount;
cout << "enter data amount : ";
cin >> data_amount;
    
int * data = new int[data_amount];
    
for(int i = 0; i < data_amount ; i += 1)
{
    cin >> data[i];
}
