#include <stdio.h>
//C�зǨ禡�w
//�r��B�z:#include <string.h>
//�ƾǹB��:#include <math.h>
//��J�P��X�B�z:#include <stdio.h>
//�O����޲z:#include <stdlib.h>
//�禡�ŧi�g�b.h�ɸ̭�(�� int f(int);)
//�禡�w�q�g�b.o�ɸ̭�(�� int f(int x){...})

//�禡(�^�ǭȸ�ƫ��A �����W��(�ѼƸ�ƫ��A �ѼƦW��,...))
/*int f(int x){
    return x + 3;
}

int main(){
    printf("%d\n", f(4));
    return 0;
}*/

//�@��|���N�禡�w�q��b�D�{���e���A���]�i�H���ŧi�@�禡�æb�D�{����ɤW�w�q
/*int f(int x); //�ŧi(����x�]�i�ٲ�)

int main(){
    printf("%d\n", f(4));
    return 0;
}

int f(int x){ //�w�q(����x���i�ٲ�)
    return x + 3;
}*/

//���H�G���禡
/*double div2(double x){
    return x / 2;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n", div2(n));
    return 0;
}*/

//�p�⥭���
/*#include <math.h>
int main(){
    int n;
    printf("n = :");
    scanf("%d", &n);
    printf("%lf\n", sqrt(n));
    return 0;
}*/

//��ƨD�̤j��
/*int max2(int, int);

int main(){
    int a,b;
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("maximum is %d\n", max2(a,b));
    return 0;
}

int max2(int a, int b){ //max�D���n�A�i����return a, b
    int max;
    if (a >= b){
        max = a;
    }else {
        max = b;
    }
    return max;
}*/

//�ܼ�����
/*int i; //���������ܼ�(global variable)�A���main���~�w�q���ܼơA�P�W�����ܼƤΨ禡�u��U���@��

int main(){
    int j; //�����ϰ��ܼ�(local variable)�A���禡�w�q���A�P�@�϶�{}���P�W���ܼƥu�঳�@��
    return 0;
}*/

//�ܼƥi���d��(scope) (�@)
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

//�ܼƥi���d��(scope) (�G)
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

//�T�ƨD�̤j��(�]�i�H��max2��max3)
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

//�e�T����
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

void print_star(int i){ //void�N���^�ǥ���ȡAreturn��ťթάٲ�
    int j;
    for (j=1;j<=i;j++){
        printf("*");
    }
    //return;
}*/

//�üƥͦ�rand()�A�üƺ�srand(int)
/*#include <stdlib.h>
int main(){
    srand(1); //�P�ӶüƺءA�b�C���ͦ����üƬۦP
    int i;
    for (i=1;i<=5;i++){
        printf("%d\n", rand()); //�Y�S�����P���üƺءA�C���ͦ����üƳ��|�ۦP
    }
    return 0;
}*/

//�H���üƥͦ�(��time)
/*#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0)); //��time�ӱo�줣�P���üƺ�
    int i;
    for (i=1;i<=5;i++){
        printf("%d\n", rand());
    }
    return 0;
}*/

//�Y��l����
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

//�R�Astatic�ϰ��ܼơA�����o������ܼƪ��ĪG
/*int count(void){
    static int k = 0; //���ϰ��ܼƥu�|��l�Ƥ@���A�C���ϥΨ禡���|�Ψ�P�˪�k
    k++;
    return k;
}

int main(){
    for (int i=1;i<=5;i++){
        printf("%d\n", count());
    }
    return 0;
}*/

//�R�Astatic�����ܼơA��u�i�b���ɮפ��ϥΪ������ܼ�
