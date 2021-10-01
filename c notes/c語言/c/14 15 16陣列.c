#include <stdio.h>


//膀セ皚
/*int main(){
    int v[3]; //じ皚
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

//浑翴计瞷Ω计参璸(щ6000Ω)
/*#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int counter[6] = {0,0,0,0,0,0};
    //int counter[6] = {0}; //﹍て程ぶ璶﹚ㄤ緇ゼ﹚玥箇砞0
    //int counter[] = {0,0,0,0,0,0}; //ぃ糶计皚计パ﹚计计∕﹚
    //counter[0]=counter[1]=counter[2]=counter[3]=counter[4]=counter[5]=0; //程猜糶猭
    for (int i=1;i<=6000;i++){
        int dice = rand() % 6 + 1;
        counter[dice-1]++;
    }
    for (int j=1;j<=6;j++){
        printf("%d: %d\n", j, counter[j-1]);
    }
    return 0;
}*/

//禣肂璸衡
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

//ㄢ聋浑㎝瞷Ω计(100000Ω)
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

//计琩高(5计琩0挡)
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

//琩高倒﹚计(10)(璝倒0 0 玥挡)
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

//琩高ず程计(琩0玥挡)
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


//程钡计(иぶゴ讽丁禯薄猵3 7 い丁琌5玥氮匡3)
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


//参璸兵瓜(1~100)
/*int main(){
    int num, counter[10]={0};
    for (int i=0;i<10;i++){
        printf("%d: ", i+1);
        scanf("%d", &num);
        counter[(num-1)/10]++;
    }
    for (int i=1;i<=10;i++){
        printf("%3d: ", i*10); //%3d痙璝ぃì穦干(for 逼)
        for (int j=0;j<counter[i-1];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


//―渤计璝计玥计(0~9)
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


//―程计籔キА
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

//產生不重複亂數
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


//建表產生不重複亂數
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

//交換法產生亂數
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
