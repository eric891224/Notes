#include <stdio.h>
//C標準函式庫
//字串處理:#include <string.h>
//數學運算:#include <math.h>
//輸入與輸出處理:#include <stdio.h>
//記憶體管理:#include <stdlib.h>
//函式宣告寫在.h檔裡面(例 int f(int);)
//函式定義寫在.o檔裡面(例 int f(int x){...})

//函式(回傳值資料型態 函釋名稱(參數資料型態 參數名稱,...))
/*int f(int x){
    return x + 3;
}

int main(){
    printf("%d\n", f(4));
    return 0;
}*/

//一般會先將函式定義放在主程式前面，但也可以先宣告一函式並在主程式後補上定義
/*int f(int x); //宣告(此時x也可省略)

int main(){
    printf("%d\n", f(4));
    return 0;
}

int f(int x){ //定義(此時x不可省略)
    return x + 3;
}*/

//除以二的函式
/*double div2(double x){
    return x / 2;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n", div2(n));
    return 0;
}*/

//計算平方根
/*#include <math.h>
int main(){
    int n;
    printf("n = :");
    scanf("%d", &n);
    printf("%lf\n", sqrt(n));
    return 0;
}*/

//兩數求最大值
/*int max2(int, int);

int main(){
    int a,b;
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("maximum is %d\n", max2(a,b));
    return 0;
}

int max2(int a, int b){ //max非必要，可直接return a, b
    int max;
    if (a >= b){
        max = a;
    }else {
        max = b;
    }
    return max;
}*/

//變數類型
/*int i; //此為全域變數(global variable)，位於main之外定義的變數，同名全域變數及函式只能各有一個

int main(){
    int j; //此為區域變數(local variable)，位於函式定義內，同一區塊{}內同名稱變數只能有一個
    return 0;
}*/

//變數可視範圍(scope) (一)
/*int i = 1;

int main(){
    printf("%d", i);
    int i = 2;
    printf("%d", i);
    {
        printf("%d", i);
        int i = 3;
        printf("%d", i);
    }
    printf("%d", i);
    return 0;
}*/

//變數可視範圍(scope) (二)
/*int i = 5;

int f(){
    i = i + 1;
    printf("%d\n", i);
    return 0;
}

int main(){
    printf("%d\n", i);
    int i = 6;
    i = i + 1;
    f();
    printf("%d\n", i);
    return 0;
}*/

//三數求最大值(也可以用max2做max3)
/*int max3(int,int,int);

int main(){
    int a,b,c;
    printf("enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("maximum is %d", max3(a,b,c));
    return 0;
}

int max3(int a, int b, int c){
    int max = a;
    if (b > a){
        max = b;
    }
    if (c > a){
        max = c;
    }
    return max;
}*/

//畫三角形
/*void print_star(int i);
void print_triangle(int n);

int main(){
    int n;
    printf("n = :");
    scanf("%d", &n);
    print_triangle(n);
    return 0;
}

void print_triangle(int n){
    int i;
    for (i=1;i<=n;i++){
        print_star(i);
        printf("\n");
    }
}

void print_star(int i){ //void代表不回傳任何值，return後空白或省略
    int j;
    for (j=1;j<=i;j++){
        printf("*");
    }
    //return;
}*/

//亂數生成rand()，亂數種srand(int)
/*#include <stdlib.h>
int main(){
    srand(1); //同個亂數種，在每次生成的亂數相同
    int i;
    for (i=1;i<=5;i++){
        printf("%d\n", rand()); //若沒有不同的亂數種，每次生成的亂數都會相同
    }
    return 0;
}*/

//隨機亂數生成(用time)
/*#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0)); //用time來得到不同的亂數種
    int i;
    for (i=1;i<=5;i++){
        printf("%d\n", rand());
    }
    return 0;
}*/

//擲骰子五次
/*#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int i;
    for (i=1;i<=5;i++){
        int dice = rand() % 6 + 1;
        printf("%d\n", dice);
    }
    return 0;
}*/

//靜態static區域變數，類似得到全域變數的效果
/*int count(void){
    static int k = 0; //此區域變數只會初始化一次，每次使用函式都會用到同樣的k
    k++;
    return k;
}

int main(){
    for (int i=1;i<=5;i++){
        printf("%d\n", count());
    }
    return 0;
}*/

//靜態static全域變數，表只可在該檔案內使用的全域變數
