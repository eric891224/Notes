#include <stdlib.h>

//two dimensional array
/*int main(){
    int v[2][3] = {{1,2,3},{4,5,6}};

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("%d\n", v[i][j]);
        }
    }
    return 0;
}*/

//�E�c��(1d)
/*int main(){
    int v[9] = {1,2,3,4,5,6,7,8,9}, count=1;
    for (int i=0;i<9;i++){
        printf("%d ", v[i]);
        if (count%3==0){
            printf("\n");
        }
        count++;
    }
    return 0;
}*/

//�E�c��(2d)
/*int main(){
    int v[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

//�}�C�ƻs
/*#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n[10];
    for (int i=0;i<10;i++){
        n[i] = rand() % 100;
    }
    int v[10];
    for (int i=0;i<10;i++){
        v[i] = n[i];
    }
    printf("n: ");
    for (int i=0;i<10;i++){
        printf("%d ", n[i]);
    }
    printf("\nv: ");
    for (int i=0;i<10;i++){
        printf("%d ", v[i]);
    }
    return 0;
}*/

//�禡���ǻ��}�C���覡(�@���Ʒ|�ƻs�@���i�禡�B�z�A���}�C���|�A�B�禡�^�ǭȤ��ର�}�C)
/*#include <stdlib.h>
#include <time.h>

void arrayRand(int[10]);
int arrayMax(int[10]);
void arrayPrint(int[10]);

int main(){
    srand(time(0));
    int v[10];
    arrayRand(v);
    arrayPrint(v);
    printf("Max: %d\n", arrayMax(v));
    return 0;
}

void arrayRand(int v[10]){
    int i;
    for (i=0;i<10;i++){
        v[i] = rand() % 100;
    }
}

int arrayMax(int v[10]){
    int max = v[0], i;
    for (i=1;i<10;i++){
        if (v[i]>max){
            max = v[i];
        }
    }
    return max;
}

void arrayPrint(int v[10]){
    for (int i=0;i<10;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}*/

//����N�}�C�D�̤j�Ȫ��禡
/*int max3(int[],int N);

int main(){
    int a[3] = {3,9,7};
    printf("Max: %d\n", maxv(a, 3));
    int b[5] = {3,9,1,2,7};
    printf("Max: %d\n", maxv(b, 5));
    return 0;
}

int maxv(int v[],int N){
    int max = v[0];
    for (int i=1;i<N;i++){
        if (v[i]>max){
            max = v[i];
        }
    }
    return max;
}*/

//�s���}�C�~���������D
/*int main(){
    int v[3] = {1,2,3};
    printf("%d\n", v[0]);
    printf("%d\n", v[2]);
    printf("%d\n", v[3/2]); //v[1]

    //printf("%d\n", v[0.5]);  error!
    //printf("%d\n", v[3/2.]); error!

    //printf("%d\n", v[3]); undefined!
    //printf("%d\n", v[-1]);undefined!
    return 0;
}*/

//���o�}�C�j�p(��sizeof�A�nprint�X�ɥ�%zu)(�`�N���i�Ω�禡)
/*int main(){
    printf("size of int: %zu\n", sizeof(int));

    int v[3] = {1,2,3};
    printf("size of v[0]: %zu\n", sizeof(v[0]));
    printf("size of v: %zu\n", sizeof(v));
    printf("length of v: %zu\n", sizeof(v)/sizeof(v[0]));
    return 0;
}*/

//�S�w�O�d�ȼаO�}�C����(�L����b�}�C�̫᭱�[�W�@�ӯS�w�ȧ@������)
/*int length(int[])

int main(){
    int v[] = {1,2,3,-1};
    printf("%d\n", length(v));
    return 0;
}

int length(int v[]){
    int i = 0;
    while (v[i]!=-1){
        i++
    }
    return i;
}*/

//�s���}�C��������z:�O�����}(v[i]���_�l��} = v[0]����} + i * sizeof(int))
