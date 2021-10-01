#include <stdio.h>

int main(){
    //成績pass or fail
    /*int score;
    printf("enter your score: ");
    scanf("%d", &score);
    if (score >= 60){
        printf("pass.\n");
    }else {
        printf("failed.\n");
    }*/

    //比大小
    /*int a,b;
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);
    if (a < b){
        printf("a < b\n");
    }else if (a > b){
        printf("a > b\n");
    }else {
        printf("a = b\n");
    }*/

    //加減乘除
    /*int num1, num2;
    char op;
    float answer;
    scanf("%d%c%d",&num1,&op,&num2);
    if (op=='+'){
        answer = num1 + num2;
    }else if (op=='-'){
        answer = num1 - num2;
    }else if (op=='*'){
        answer = num1 * num2;
    }else {
        answer = (float)num1 / num2;
    }
    printf("answer: %lf\n", answer);*/

    //加減乘除switch語法
    /*int num1, num2;
    char op;
    float answer;
    scanf("%d%c%d",&num1,&op,&num2);
    switch (op){
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = (float)num1 / num2;
            break;
    }
    printf("answer: %lf\n", answer);*/

    //ID查詢(已知2:John,13:Mary,16:Amy) 若不加break會繼續往下執行
    /*int id;
    printf("enter ID: ");
    scanf("%d", &id);
    switch (id){
        case 2:
            printf("John\n");
            break;
        case 13:
            printf("Mary\n");
            break;
        case 16:
            printf("Amy\n");
            break;
        default:
            printf("Not found\n");
    }*/
    return 0;
}
