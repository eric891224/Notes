#include <stdio.h>

//�禡�I�s
/*void addone1(int n){
    n = n + 1;
}

void addone2(int *n){
    *n = *n + 1;
}

int main(){
    int a = 3;

    addone1(a); //�ƻsa���ȵ�function
    printf("%d\n", a); //a=3

    addone2(&a); //�ƻsa���O�����m��function
    printf("%d\n", a); //a=4
    return 0;
}*/

//�ƭȥ洫
/*void swap(int *, int *);

int main(){
    int a = 3, b = 5;
    swap(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}*/

//���ܼƱƧ�(�p��j)
void sort2(int *, int *);
void swap(int *, int *);

int main(){
    int a = 5, b = 3;
    sort2(&a,&b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

void sort2(int *a, int *b){ //�`�N���ɬ���m���ƻs�~
    if (*a>*b){
        swap(&*a,&*b); //�۷��swap(a,b);
    }
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
