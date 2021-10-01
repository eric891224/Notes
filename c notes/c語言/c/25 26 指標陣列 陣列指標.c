 #include <stdio.h>

//指標陣列-1(好用)
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

//指標陣列-2
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

//利用第一種方法的指標陣列可以存取多個不同陣列
/*
int main(){
    int a[2] = {1,2};
    int b[2] = {3,4};
    int c[2] = {5,6};

    int *p[3] = {a,b,c}; //自動轉型&a[0] &b[0] &c[0]

    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            p[i][j] = 0;
        }
    }

    p[2][0] = 7;
    return 0;
}*/

//陣列的指標
/*
int main(){
    int v[3] = {1,2,3};

    int (*q)[3] = &v; //q為指標，只存v第一個元素的位子，其形態為(int (*)[3])

    int i;
    for (i=0;i<3;i++){
        (*q)[i] = 0;
    }

    (*q)[2] = 5;
    return 0;
}
*/

//函式間傳遞陣列
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
