#include <stdio.h>

//輸入任意整數後一起輸出(使陣列變大：產生新陣列)(動態配置記憶體)(釋放動態記憶體)
/*
#include <stdlib.h> //malloc函式可動態配置記憶體void* malloc((size_t) size);
                    //free函式可釋放動態配置的記憶體void free((void*) ptr);
int main(){
    int *numbers = 0;//用指標來儲存陣列首元素位置，空指標0(表null)
    int length = 0;

    while (1){
        int input;
        scanf("%d", &input);
        if (input==0) break;

        //int larger[length+1]; 原本的方法會造成下方printf未定義行為
        int *larger = malloc(sizeof(int) * (length+1)); //產生大一格的新陣列，注意此時larger為指標，指向malloc配置的記憶體位置開頭
        for (int i=0;i<length;i++) larger[i] = numbers[i];//複製就陣列到新陣列
        free(numbers); //原本numbers的記憶體位置在下一迴圈不會再使用，故釋放記憶體
        numbers = larger;//相當於&larger[0]
        numbers[length] = input;
        length++;
    } //larger記憶體在此被釋放，造成下方printf出現未定義行為(numbers存取的記憶體位置已被釋放)，故使用動態配置記憶體
      //使用malloc配置的記憶體在此不會被釋放

    printf("Numbers: ");
    for (int i=0;i<length;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}*/

//解法二
#include <stdlib.h>//realloc函式重新配置記憶體void* realloc((void*) ptr, (size_t) size);
                   //ptr為由malloc或其他動態記憶體函式給的位置；size為新記憶體空間大小
int main(){
    int *numbers = 0;//用指標來儲存陣列首元素位置，空指標0(表null)
    int length = 0;

    while (1){
        int input;
        scanf("%d", &input);
        if (input==0) break;

        //int larger[length+1]; 原本的方法會造成下方printf未定義行為
        numbers = realloc(numbers, (sizeof(int))*(length+1)); //使用realloc重新配置記憶體


        numbers[length] = input;
        length++;
    } //larger記憶體在此被釋放，造成下方printf出現未定義行為(numbers存取的記憶體位置已被釋放)，故使用動態配置記憶體
      //使用malloc配置的記憶體在此不會被釋放

    printf("Numbers: ");
    for (int i=0;i<length;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
