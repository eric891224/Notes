#include <stdio.h>

//二為字元陣列 問題
/*
int main(){
    char strA[3][4] = {"How","are","you"}; //注意每個字串結尾為'\0'
    strA[2][0] = 'Y' //可以
    strA[0] = "What" //不行，陣列無法賦值
    strcpy(strA[0], "What"); //可能不行，字串陣列可能記憶體空間大小不足，且耗時間

    const char *strB[3] = {"How","are","you"};
    strB[2][0] = 'Y' //error 唯讀
    strB[0] = "What"; //可以，產生一個指標，指向新的唯讀字串(替代指向"How"的指標)
    strcpy(strB[0], "What"); //不行
    return 0;
}*/

//二維字元陣列 解決方法
/*
int main(){
    char strA[3][4] = {"How","are","you"};
    char *strB[3] = {strA[0], strA[1], strA[2]};

    strB[2][0] = 'Y'; //可以

    //strB[0] = "What"; //不建議，因為"What"會轉成const char只能讀
    char strC[5] = "What";
    strB[0] = strC;
    strB[0][0] = 'w'; //可以
    return 0;
}*/

//輸入不定個數字串後印出(END結束)
/*
#include <string.h> //strcmp可以比較輸入字串和目標字串 strcmp(input, target)，若相等則回傳0
                    //strcpy之前講過 strcpy(預複寫位置, 目標字串)
int main(){
    char str[100][5];
    char input[5];
    int len = 0; //表字串數量

    while (1){
        scanf("%s", input); //注意不用加&，因為字元陣列本身就是指向第一個元素的指標
        if (strcmp(input, "END") == 0) break;
        strcpy(str[len], input);
        len++;
    }
    printf("-------\n");
    int i;
    for (i=0;i<len;i++){
        printf("%s ", str[i]);
    }
    printf("\n");
    return 0;
}*/

//輸入不定個數字串後印出(END結束) (優化)
/*
#include <string.h> //strlen會回傳字串長度(不含'\0') str(input)

int main(){
    char raw[5000]; //總共5000個字元空間
    char input[50];
    char *str[100]; //紀錄每一個單字，方便存取
    int size = 0; //用了多少字元空間
    int len = 0; //有幾個單字

    while (1){
        scanf("%s", input);
        if (strcmp(input, "END") == 0) break;
        str[len] = &raw[size];
        strcpy(&raw[size], input);
        size += strlen(input) + 1; //記得加上'\0'
        len++;
    }

    printf("--------\n");
    for (int i=0;i<len;i++){
        printf("%s ", str[i]);
    }
    printf("\n(%d, %d)", len, size);
    return 0;
}*/
