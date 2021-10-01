#include <stdio.h>

//字元陣列(通常以\0當結尾)
/*void str_print(char str[]){
    int i;
    for (i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int main(){
    char ch = 'H'; //字元型別
    char str[] = {'H','e','l','l','o','\0'}; //字元陣列

    str_print(str);
    return 0;
}*/

//用"字串內容"初始化字元陣列，c會在結尾自動補上\0。印出時可用%s直接印出字元陣列
/*void str_print(char str[]){
    printf("%s\n",str);
}

int main(){
    char str[] = "Hello world";
    str_print(str);
    return 0;
}*/

//計算字串長度
/*int str_len(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char str[] = "Hello world";
    printf("Length: %zu\n", sizeof(str)); //12, 因為包含\0
    printf("Length: %d\n", str_len(str)); //11
}*/

//由鍵盤讀入文字
/*void str_read(char[]);

int main(){
    char str[15];
    str_read(str);
    printf("%s\n", str);
    return 0;
}

void str_read(char str[]){
    int i = 0;
    while (1){
        scanf("%c", &str[i]);
        if (str[i] == '\n'){
            break;
        }
        i++;
    }
    str[i] = '\0';
}*/

//判斷scanf是否成功讀入資料
/*int main(){
    int number;
    if (scanf("%d", &number) == 1){ //scanf回傳值表成功讀到幾筆資料
        printf("%d", number);
    }
    return 0;
}*/

int main(){
    int num;
    while (scanf("%d", &num) != 1){
        printf("Invalid input\n");
        scanf("%d", &num);
    }
    printf("%d", num);
    return 0;
}

