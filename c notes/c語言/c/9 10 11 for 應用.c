#include <stdio.h>

int main(){
    //for �z�y�L1~10
    /*int count;
    for (count=1; count<=10; count++){
        printf("%d\n", count);
    }*/

    //�L10~1
    /*int count;
    for (count=10; count>=1; count--){
        printf("%d\n", count);
    }*/

    //�L1~10�����_��
    /*int count;
    for (count=1; count<=10; count+=2){
        printf("%d\n", count);
    }*/

    //1�[��N����ƩM
    /*int count,n,sum=0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (count=1; count<=n; count++){
        sum += count;
    }
    printf("sum is %d\n", sum);*/

    //�DN���Ҧ����]��
    /*int n,i;
    printf("N = : ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        if (n%i==0){
            printf("%d\n", i);
        }
    }*/

    //��ƧP�_
    /*int i,n,p=0;
    printf("n = :");
    scanf("%d", &n);
    for (i=2; i<=n; i++){
        if (n%i==0 && i!=1 && i!=n){
            printf("%d is not prime number\n", n);
            p = 1;
            break;
        }
    }
    if (p==0){
        printf("%d is a prime number\n", n);
    }*/

    //�L�E�E���k��(product�D���n�A������i*j)
    /*int i,j;
    for (i=2; i<=9; i++){
        for (j=1; j<=9; j++){
            int product = i*j;
            printf("%d x %d = %d\n", i,j,product);
        }
    }*/

    //�e�����(N*N)
    /*int n,i,j;
    printf("n = :");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }*/

    //�e�Ťߪ����
    /*int n,i,j;
    printf("n = :");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            if (i==1 || i==n){
                printf("*");
            }else {
                if (j==1 || j==n){
                    printf("*");
                }else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }*/

    return 0;
}
