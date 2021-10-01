#include <stdio.h>

int main(){
    //ㄢ计―程
    /*int a,b,max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    if (a>=b){
        max = a;
    }
    if (a<=b){
        max = b;
    }
    printf("The maximum is %d\n", max);*/

    //计―程
    /*int a,b,c;
    printf("enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    int max;
    if (a>=b && a>=c){
        max = a;
    }
    if (b>a && b>=c){
        max = b;
    }
    if (c>a && c>b){
        max = c;
    }
    printf("maximum is %d.\n", max);*/

    //计―程
    int a,b,c,d,max;
    printf("enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = a;
    if (max<b){
        max = b;
    }
    if (max<c){
        max = c;
    }
    if (max<d){
        max = d;
    }
    printf("Maximum is %d.\n", max);

    //计―い计
    int a,b,c,median;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a,&b,&c);
    median = a;
    if (b>=a && b<=c || b<=a && b>=c){
        median = b;
    }
    if (c>=a && c<=b || c<=a && c>=b){
        median = c;
    }
    return 0;
}
