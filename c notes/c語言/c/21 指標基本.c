#include <stdio.h>

//指標變數宣告(儲存記憶體位置的資料型別)
/*int main(){
    int count = 9;
    int *countAddr; //(int *)為整數指標，代表countAddr儲存此資料型別(int)的記憶體位置
    countAddr = &count; //&為取址運算子，會取得變數的記憶體位置

    //注意countAddr的型別為(int *)，&count的型別為(int *)
    int a;
    int *b;

    a = count; //(int) = (int)
    //b = count; //error: (int *) = (int)
    //a = &count;//error: (int) = (int *)
    b = &count;//(int *) = (int *)
    return 0;
}*/

//間接運算子(*)，取得該記憶體位置的變數
/*int main(){
    int count = 9;
    int * countAddr = &count; //注意此為(int *)資料型別
    int result = *countAddr;  //注意此為(*)取址運算子

    printf("%d\n", result);

    *countAddr = 10;

    printf("%d\n", count); //指標可以改變原本變數
    printf("%d\n", result);
    return 0;
}*/

//性質
/*
int count = 9;
int *countAddr = &count;
int result = *countAddr  //以下三行作用相等
    result = *&count     //*&相鄰可抵消(表先問count的位置，再問該位置的變數為何)
    result = count

*countAddr = 10; //以下兩行作用相等
count = 10;

*&*&*&*&*&result = 20; //以下兩行相等
result = 20;
/*


