#include <stdio.h>

//函式遞迴(這個例子的程式無法正常結束，會用光記憶體)
/*void f(void);

int main(){
    f();
    return 0;
}

void f(void){
    f();
}*/

//函式遞迴
/*int f(int);

int main(){
    printf("%d\n", f(0));
    return 0;
}

int f(int i){
    if (i == 5){
        return i;
    }
    return f(i+1);
}*/

//數數字1~3
/*void countTo3(int);

int main(){
    countTo3(1);
    return 0;
}

void countTo3(int i){
    if (i<=3){
        printf("%d\n", i);
        countTo3(i+1);
    }
}*/

//數數字3~1(或是把1~3的函式中printf跟countTo3交換)
/*void countTo1(int);

int main(){
    countTo1(3);
    return 0;
}

void countTo1(int i){
    if (i>=1){
        printf("%d\n", i);
        countTo1(i-1);
    }
}*/

//連續整數和1~N
/*int sum(int);

int main(){
    int n;
    printf("N = :");
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}

int sum(int n){
    if (n==1){
        return 1;
    }
    return sum(n-1)+n;
}*/

//上樓梯方法數，一次走一或二階，共走N階
/*int stairs(int);

int main(){
    int n;
    printf("N = :");
    scanf("%d", &n);
    printf("%d\n", stairs(n));
    return 0;
}

int stairs(int n){
    if (n==1){
        return 1;
    }else if (n==2){
        return 2;
    }else {
        return stairs(n-1) +stairs(n-2);
    }
}*/
