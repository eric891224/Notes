#include <stdio.h>


//�򥻰}�C
/*int main(){
    int v[3]; //�ŧi�@�t�T�Ӥ������}�C
    v[0] = 3;
    v[1] = 5;
    v[2] = 0;
    int max = v[0];
    if (v[1]>max){
        max = v[1];
    }
    if (v[2]>max){
        max = v[2];
    }
    printf("max: %d\n", max);
    return 0;
}*/

//��l�I�ƥX�{���Ʋέp(��6000��)
/*#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int counter[6] = {0,0,0,0,0,0};
    //int counter[6] = {0}; //��l�Ƴ̤֭n���w�@�ȡA��l�����w���ȫh�w�]��0
    //int counter[] = {0,0,0,0,0,0}; //�]�i�H���g�ӼơA�}�C�Ӽƥѫ᭱���w�Ʀr�ӼƨM�w
    //counter[0]=counter[1]=counter[2]=counter[3]=counter[4]=counter[5]=0; //�̲¼g�k
    for (int i=1;i<=6000;i++){
        int dice = rand() % 6 + 1;
        counter[dice-1]++;
    }
    for (int j=1;j<=6;j++){
        printf("%d: %d\n", j, counter[j-1]);
    }
    return 0;
}*/

//���O���B�p��
/*int main(){
    int total=0;
    int id[5]={90,75,83,89,71};
    int input;
    do {
        scanf("%d", &input);
        if (input!=0){
            total += id[input-1];
        }
    }while (input!=0);
    printf("Total: %d\n", total);
    return 0;
}*/

//������l���M�X�{����(100000��)
/*#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int counter[11] = {0};
    for (int i=1;i<=100000;i++){
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        counter[dice1 + dice2 - 2]++;
    }
    for (int j=2;j<=12;j++){
        printf("%d: %d\n", j, counter[j-2]);
    }
    return 0;
}*/

//�Ʀr�d��(���s5�ӼƦr�A�d0�ɵ���)
/*int main(){
    int num[5] = {0};
    for (int i=1;i<=5;i++){
        printf("%d: ", i);
        scanf("%d", &num[i-1]);
    }
    int input;
    do {
        printf("Q: ");
        scanf("%d", &input);
        if (input!=0){
            printf("%d\n", num[input-1]);
        }
    }while (input!=0);
    return 0;
}*/

//�d�ߦb���w�W�U�ɪ��Ʀr(���s10��)(�W�U�ɭY��0 0 �h����)
/*int main(){
    int num[10];
    for (int i=0;i<10;i++){
        printf("%d: ", i+1);
        scanf("%d", &num[i]);
    }
    int upper,lower;
    do {
        printf("lower, upper = ");
        scanf("%d%d", &lower, &upper);
        if (lower==0 && upper==0){
            break;
        }
        if (upper!=0 && lower!=0){
            for (int j=0;j<10;j++){
                if (num[j]>=lower && num[j]<=upper){
                    printf("%d ", num[j]);
                }
            }
        }
        printf("\n");
    }while (upper!=0 && lower!=0);
    return 0;
}*/

//�d�ߤW�����̤j�Ʀr(�d0�h����)
/*int main(){
    int num[10];
    for (int i=0;i<10;i++){
        printf("%d: ", i+1);
        scanf("%d", &num[i]);
    }

    int limit;
    do {
        int max_i=-1;
        printf("limit : ");
        scanf("%d", &limit);
        if (limit==0){break;}
        for (int j=0;j<=10;j++){
            if (num[j]<=limit && (max_i==-1 || num[j]>num[max_i])){
                max_i = j;
            }
        }
        if (max_i!=-1){
            printf("ANS: %d\n", num[max_i]);
        }
    }while (limit!=0);
    return 0;
}*/


//�̱���Ʀr(�ڤ֥����Z�ۦP�����p�A�p3 7 �����O5�h���׿�3)
/*#include <stdlib.h>

int main(){
    int num[10];
    for (int i=0;i<10;i++){
        printf("%d: ", i+1);
        scanf("%d", &num[i]);
    }
    int q;
    do {
        printf("Q: ");
        scanf("%d", &q);
        if (q==0){break;}
        int nearest_n_i=-1;
        for (int i=0;i<10;i++){
            if (abs(q-num[i])<abs(q-num[nearest_n_i]) || nearest_n_i==-1){
                nearest_n_i = i;
            }
        }
        if (nearest_n_i!=-1){
            printf("ANS: %d\n", num[nearest_n_i]);
        }
    }while (q!=0);

    return 0;
}*/


//�έp������(1~100)
/*int main(){
    int num, counter[10]={0};
    for (int i=0;i<10;i++){
        printf("%d: ", i+1);
        scanf("%d", &num);
        counter[(num-1)/10]++;
    }
    for (int i=1;i<=10;i++){
        printf("%3d: ", i*10); //%3d��d�T��A�Y�����|�ɪŮ�(for �ƪ�)
        for (int j=0;j<counter[i-1];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


//�D���ơA�Y�Ʀr�P�h���j��(0~9)
/*int main(){
    int n, count[10]={0};
    for (int i=0;i<10;i++){
        scanf("%d", &n);
        count[n]++;
    }
    int ans=0;
    for (int i=0;i<10;i++){
        if (count[i]>=count[ans]){
            ans = i;
        }
    }
    printf("ANS: %d\n", ans);
    return 0;
}*/


//�D�̤j�ƻP������
/*int main(){
    int max,avg,num[10]={0};
    for (int i=0;i<10;i++){
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (int i=1;i<10;i++){
        if (num[i] > max){
            max = num[i];
        }
    }
    int sum = num[0];
    for (int i=1;i<10;i++){
        sum += num[i];
    }
    avg = sum / 10;
    printf("MAX: %d\n", max);
    printf("AVG: %d\n", avg);
    return 0;
}*/

//�a�������}�y��
/*#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int n[10],i,j;
    for (i=1;i<=10;i++){
        do {
            n[i-1] = rand() % 10 + 1;
            for (j=1;j<i;j++){
                if (n[j-1]==n[i-1]){
                    break;
                }
            }
        }while (j!=i);
        printf("%d ", n[i-1]);
    }
    printf("\n");
    return 0;
}*/


//����a�������}�y��
/*#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int i,n,counter[10]={0};
    for (i=1;1<=10;i++){
        do{
            n = rand() % 10 + 1;
        }while (counter[n-1]!=0);

        printf("%d ", n);
        counter[n-1]++;
    }
    printf("\n");
    return 0;
}*/

//���Q���a���y��
/*#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n[10];
    for (int i=1;i<=10;i++){
        n[i-1] = i;
    }
    for (int i=1;i<=10;i++){
        int j = rand() % (11-i) + i;
        int temp = n[i-1];
        n[i-1] = n[j-1];
        n[j-1] = temp;
        printf("%d ", n[i-1]);
    }
    printf("\n");
    return 0;
}*/
