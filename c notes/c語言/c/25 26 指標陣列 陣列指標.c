 #include <stdio.h>

//���а}�C-1(�n��)
/*
int main(){
    int *p[3] = {&v[0],&v[1],&v[2]};

    int i;
    for (i=0;i<3;i++){
        *p[i] = 0;
    }

    *p[2] = 5;
    return 0;
}*/

//���а}�C-2
/*
int main(){
    int v[3] = {1,2,3};

    int *n = v;

    int i;
    for (i=0;i<3;i++){
        n[i] = 0;
    }

    n[2] = 5;
    return 0;
}*/

//�Q�βĤ@�ؤ�k�����а}�C�i�H�s���h�Ӥ��P�}�C
/*
int main(){
    int a[2] = {1,2};
    int b[2] = {3,4};
    int c[2] = {5,6};

    int *p[3] = {a,b,c}; //�۰��૬&a[0] &b[0] &c[0]

    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            p[i][j] = 0;
        }
    }

    p[2][0] = 7;
    return 0;
}*/

//�}�C������
/*
int main(){
    int v[3] = {1,2,3};

    int (*q)[3] = &v; //q�����СA�u�sv�Ĥ@�Ӥ�������l�A��κA��(int (*)[3])

    int i;
    for (i=0;i<3;i++){
        (*q)[i] = 0;
    }

    (*q)[2] = 5;
    return 0;
}
*/

//�禡���ǻ��}�C
void print(int (*q)[3]){
    int i;
    for (i=0;i<3;i++){
        printf("%d", (*q)[i]);
    }
    printf("\n");
}

int main(){
    int v[3] = {1,2,3};
    print(&v);
    return 0;
}
