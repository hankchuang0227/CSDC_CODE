int numbers[5] = {1,2,3,4,5};

int main(){
    int * ptr = &numbers[0];
  
    ptr += 100; // 將 ptr 指到 array 外面
  
    *ptr = 0; // 將 ptr指向的地方設為 0 ，可能導致程式錯
    誤或 segmentation fault
  
    return 0;
}

