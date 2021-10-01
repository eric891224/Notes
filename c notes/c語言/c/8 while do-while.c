#include <stdio.h>

int main(){
    //while述句
    /*int count = 0;
    while (count < 3){
        printf("%d\n", count);
        count += 1;
    }*/

    //猜數字猜到對並回報次數
    /*int answer = 5;
    int yes = 1;
    int count = 0;
    int guess;
    while(yes == 1){
        count += 1;
        printf("enter your guess: ");
        scanf("%d", &guess);
        if(guess>answer){
            printf("too large.\n");
        }else if (guess<answer){
            printf("too small.\n");
        }else {
            printf("correct. (%d)\n", count);
            yes = 0;
        }
    }*/

    //求不定個數正整數和(直到輸入0為止)
    /*int proceed = 1;
    int sum = 0;
    int num;
    printf("enter the numbers (quit:0)\n");
    while (proceed == 1){
        scanf("%d", &num);
        if (num != 0){
            sum += num;
        }else {
            proceed = 0;
        }
    }
    printf("sum is %d\n", sum);*/

    //求不定個數正整數平均(直到輸入0但不包括0)
    /*double average;
    int sum = 0;
    int num;
    int count = 0;
    printf("enter the numbers (quit:0)\n");
    scanf("%d", &num);
    while (num != 0){
        sum += num;
        scanf("%d", &num);
        count += 1;
    }

    if (count != 0){
        average = (float)sum/count;
        printf("average is %lf\n", average);
    }else {
        printf("average is 0\n");
    }*/

    //do while述句(先做一次do再看while有無成立重複做)
    /*int count = 3;
    do{
        printf("%d\n", count);
        count++;
    }while(count < 3);*/

    //do while做猜數字
    /*int answer = 4;
    int guess;
    do{
        printf("enter your guess: ");
        scanf("%d", &guess);
        if (guess>answer){
            printf("too large\n");
        }else if (guess<answer){
            printf("too small\n");
        }else {
            printf("correct\n");
        }
    }while (guess != answer);*/

    //一些符號(a++, a--)
    /*int a = 0;
    int b;
    b = ++a; //---->此時b = 1, a = 1
    b = a++; //---->此時b = 1, 但a = 2
    a = a++; //---->未定義行為，不要這樣寫 */

    //可能重複購買的消費金額(price多餘、不需要case 0)
    /*int num,price,total=0;
    printf("enter the numbers: \n");
    do {
        scanf("%d", &num);
        switch (num){
            case 1:
                price = 90;
                total += price;
                break;
            case 2:
                price = 75;
                total += price;
                break;
            case 3:
                price = 83;
                total += price;
                break;
            case 4:
                price = 89;
                total += price;
                break;
            case 5:
                price = 71;
                total += price;
                break;
            case 0:
                break;
        }
    } while (num != 0);
    printf("Total: %d\n", total);*/
    return 0;
}
