char str[] = "ab,cd.ef gh/ij";
char c[] = ",./ ";  //用 ",./ "中的四個字元任一一個來分割
char *token;

token = strtok(str, c);

while(token ! = NULL){
    printf("%s ", token);
    token = strtok(NULL, c);
}

return 0;

