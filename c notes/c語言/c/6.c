#include <stdio.h>

int main(){
    //��ƱƧ�(�p��j)
    /*int a,b;
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("before: %d %d\n", a, b);
    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    printf("after: %d %d\n", a, b);*/

    //�T�ƥ洫(ABC-->BCA)
    /*int a,b,c;
    printf("enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("before: %d %d %d\n", a, b, c);
    int temp = a;
    a = b;
    b = c;
    c = temp;
    printf("after: %d %d %d\n", a, b, c);*/

    //�T�ƱƧ�(�p��j)
    /*int a,b,c;
    printf("enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("before: %d %d %d\n", a, b, c);
    int temp;
    if (b < a){
        temp = b; b = a; a = temp;
    }
    if (c < a){
        temp = c; c = a; a = temp;
    }
    if (c < b){
        temp = c; c = b; b = temp;
    }
    printf("after: %d %d %d\n", a, b, c);*/
    return 0;
}
