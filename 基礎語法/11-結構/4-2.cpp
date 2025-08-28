#include <iostream>

using namespace std;

//Linked List的項，包含這項的值和下一項的pointer : 
struct nodes 
{
    int val;
    nodes * next = nullptr; // next default 為 nullptr
};



nodes * head = new nodes; //產生 Linked List 開頭


//改變Linked List 第 index 項的值成 value : 
void set_at(int value ,int index) 
{
    nodes * curr = head;
    for(int i = 0; i < index ; i += 1)
    {
        //和 array 不同，不能直接拿到 index 項
        //得從第零項(head)開始通過一個一個 pointer 連到對的項
        curr = curr->next; 
    }
    curr->val = value; //此時 curr 己是對的項，將他的 val 設成 value
}

//取得Linked List 第 index 項的值 : 
int get_at(int index)
{
    nodes * curr = head;
    for(int i = 0; i < index ; i += 1)
    {
        //和 set_at 相同，得通過一個個 pointer 連到最後要的那一項
        curr = curr->next;
    }
    return curr->val;
}

//在 Linked List 最後加入新的一項 : 
void push(int value)
{
    nodes * curr = head;
    while(curr->next != nullptr)
    {
        curr = curr->next; // 將curr指到最後一項
    }
    
    curr->next = new nodes; // new 一項，並把 curr 指向它 
    curr->next->val = value;
    
    //Linked List 的長度變長了
    //新的項被存在 Heap 中，但位址不一定與舊的連續
}

//刪除第 index 項 : 
void delete_at(int index)
{
    //假如刪除第零項，只需將 head 設到下一項就可以
    if(index == 0) 
    {
        nodes * del_node = head;
        head = head->next;    
        delete del_node; // 記得把 Heap 的記憶體放掉
        return;
    }
    
    //若非刪除第零項 : 
    nodes * curr = head; 
    
    //先找到第 index - 1 項
    for(int i = 0; i < index - 1 ; i += 1)
    {
        curr = curr->next;
    }
    nodes * a = curr; 
    
    curr = curr->next;
    
    nodes * b = curr->next; //在找到 index + 1 項
    
    a->next = b; //將 index - 1 項的 next 指向 index + 1 項
    
    //由於沒有任何一項指向第 index 項，因此 index 項成功被從 Linked List 中刪除 
    
    delete curr; // 記得把 Heap 的記憶體放掉
}


//印出 Linked List : 
void print_list()
{
    nodes * curr = head;
    cout << curr->val;
    
    curr = curr->next;
    while(curr != nullptr)
    {
        cout << " -> " << curr->val;
        curr = curr->next;
    }
    cout << endl;
}


int main()
{
    head->val = 1; //將第一項的值設為 1 
    print_list(); //印出 Linked List 得 : 1
    
    push(2); //加入 2，Linked List 變長
    push(4); //加入 4，Linked List 變長
    print_list(); //印出 Linked List 得 : 1 -> 2 -> 4
    
    set_at(3,2); //將第二項改成 3 
    print_list(); //印出 Linked List 得 : 1 -> 2 -> 3
    
    delete_at(1); //刪除第一項，Linked List 長度縮短
    print_list(); //印出 Linked List 得 : 1 -> 3
    
    //分別加入 5, 6, 7, 8，Linked List 變長 : 
    push(5); 
    push(6);
    push(7);
    push(8);
    delete_at(0); //刪除第零項，Linked List 長度縮短

    print_list(); 
    //印出 Linked List 得 : 3 -> 5 -> 6 -> 7 -> 8
    
    
    cout << get_at(2) << endl; //印出第二項，得 : 6
    
    return 0;
}