#include <stdio.h>

//�禡���j(�o�ӨҤl���{���L�k���`�����A�|�Υ��O����)
/*void f(void);

int main(){
    f();
    return 0;
}

void f(void){
    f();
}*/

//�禡���j
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

//�ƼƦr1~3
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

//�ƼƦr3~1(�άO��1~3���禡��printf��countTo3�洫)
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

//�s���ƩM1~N
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

//�W�ӱ��k�ơA�@�����@�ΤG���A�@��N��
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
