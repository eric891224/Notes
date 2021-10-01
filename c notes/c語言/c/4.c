#include <stdio.h>

int main(){
    //if 述句
    /*int a;
    printf("a = ");
    scanf("%d", &a);
    if (a > 4){
        printf("a is larger than 4.\n");
    }
    if (a < 4){
        printf("a is smaller than 4.\n");
    }
    if (a == 4){
        printf("a is equal to 4.\n");
    }*/

    //猜數字
    /*int answer = 4;
    int guess;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if (guess > answer){
        printf("Too large!\n");
    }
    if (guess < answer){
        printf("Too small!\n");
    }
    if (guess == answer){
        printf("Correct!\n");
    }*/

    //滿額折扣
    /*int customer;
    printf("Please enter the number of customers: ");
    scanf("%d", &customer);
    if (customer*300 >= 3000){
        int price = customer*300*0.8;
        printf("Total price is: %d", price);
    }
    if (customer*300 < 3000){
        int price = customer*300;
        printf("Total price is: %d", price);
    }*/

    //正三角形判斷
    /*int a,b,c;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a==b && b==c){
        printf("Regular Triangle\n");
    }*/

    //等腰三角形判斷
    /*int a,b,c;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a==b || b==c || c==a){
        printf("Isosceles Triangle\n");
    }*/

    //直角三角形判斷
    /*int a,b,c;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
        printf("Rectangular Triangle\n");
    }*/
    return 0;
}
