#include <stdio.h>

//函式間傳遞二維陣列
/*
void print(int **v, int height, int width){
    int i,j;
    for (i=0;i<height;i++){
        for (j=0;j<width;j++){
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int v[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *p[3] = {v[0],v[1],v[2]}; //p為三元素的陣列，每個元素皆為指標，v[i]皆會轉型成&v[i][0]
    print(p,3,3); //(int **) = (int *[3])
    return 0;
}
*/

//傳遞任意長寬的陣列
void print(int *v, int height, int width){
    int i,j;
    for (i=0;i<height;i++){
        for (j=0;j<width;j++){
            printf("%d ", v[i*width + j]);
        }
        printf("\n");
    }
}
int main(){
    int v[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print((int *)v,3,3); //(int *) = (int (*)[3])整數陣列先隱性轉型成陣列的指標，再強制轉型成整數指標
    return 0;
}
