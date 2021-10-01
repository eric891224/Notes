#include <stdio.h>

//函式呼叫
/*void addone1(int n){
    n = n + 1;
}

void addone2(int *n){
    *n = *n + 1;
}

int main(){
    int a = 3;

    addone1(a); //複製a的值給function
    printf("%d\n", a); //a=3

    addone2(&a); //複製a的記憶體位置給function
    printf("%d\n", a); //a=4
    return 0;
}*/

//數值交換
/*void swap(int *, int *);

int main(){
    int a = 3, b = 5;
    swap(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}*/

//兩變數排序(小到大)
void sort2(int *, int *);
void swap(int *, int *);

int main(){
    int a = 5, b = 3;
    sort2(&a,&b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

void sort2(int *a, int *b){ //注意此時為位置的複製品
    if (*a>*b){
        swap(&*a,&*b); //相當於swap(a,b);
    }
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
