#include <stdio.h>

//字元與指標
/*
int main(){
    char strA[] = "test";               //以下兩行相同
    char strB[] = {'t','e','s','t','\0'};

    printf("%s\n", strA);
    printf(strA); //隱性轉型成指標
    printf("\n");
    printf(strB); //隱性轉型成指標
    printf("\n");

    printf("test\n"); //字元字面常數會隱性轉型成字元指標
    //printf({'t','e','s','t','\0'}); //error:不會轉型成指標

    char *strC = "test";
    //char *strD = {'t','e','s','t','\0'} //error

    printf((char[]){'t','e','s','t','\0'}); //C99:複合字面常數
    return 0;
}*/

//字元字面常數性質
/*
int main(){
    char strA[] = "test";
    char *strB = "test"; //字元字面常數隱性轉型為字元指標，但是只能讀不能寫

    strA[0] = 'T';
    //strB[0] = 'T'; //error! 只能不能寫，未定義行為

    //strA = "Test"; //error! 陣列無法賦值，未定義行為
    strB = "Test"; //可以，因為Test會隱性轉型為指標，但一樣只能讀不能寫
}*/

//const 修飾字(以const初始化的變數只能唯讀屬性)
/*
int a = 3;
const int b = 5;

a = 4;
//b = 6; //error! 唯讀

int c[3] = {3,4,5};
const int d[3] = {5,6,7};

c[0] = 4;
//d[0] = 6; //error! 唯讀
*/

//const (type) * : const 可以拿來修飾變數，確保該變數只能讀不能改寫
/*
int main(){
    char strA[] = "test";
    char *strB = "test" ;
    const char *strC = "test";

    strA[0] = 'T'; //可以
    //strB[0] = 'T'; //error! 未定義行為
    //strC[0] = 'T'; //error! 編譯失敗

    strA = strB; //error 陣列無法賦值
    strA = strC; //error 同上
    strB = strA; //可以 (char *) = (char[])
    strB = strC; //error (char *) = (const char *) 若strB取得strC的值，將可以由strB修改strC所代表的變數，矛盾，故未定義行為
    strC = strA; //可以 (const char *) = (char[]) 其中char[]將會隱性轉型成指標，再轉型成只能讀、不可寫的資料型態(const char *)
    strC = strB; //可以 (const char *) = (char *) 其中(char *) 將會轉型成(const char *)只能讀不可寫
    return 0;
}*/

//字串複製
/*
#include <string.h>
//shallow copy: copy與原本為同一個，修改copy會同時改變原本的變數
//deep copy: copy與原本各自獨立
//strcpy : (char * destination, const char * source)

int main(){
    const char *source = "test"; //以下兩行皆可，二擇一，上者test會先轉const char *然後輸入strcpy
    char source[5] = "test";     //下者為一char陣列，輸入strcpy後才轉const char *
                                 //source的重點是只需要可讀就好

    char destination[5]; //輸入strcpy後才轉char *(可讀可寫，重點是可以寫入)
    //char *destination; //error! 因為未配置記憶體空間給destination

    strcpy(destination, source);

    printf("%s\n", destination);
    return 0;
}
*/
