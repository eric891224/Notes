#include <stdio.h>

//�G���r���}�C ���D
/*
int main(){
    char strA[3][4] = {"How","are","you"}; //�`�N�C�Ӧr�굲����'\0'
    strA[2][0] = 'Y' //�i�H
    strA[0] = "What" //����A�}�C�L�k���
    strcpy(strA[0], "What"); //�i�ण��A�r��}�C�i��O����Ŷ��j�p�����A�B�Ӯɶ�

    const char *strB[3] = {"How","are","you"};
    strB[2][0] = 'Y' //error ��Ū
    strB[0] = "What"; //�i�H�A���ͤ@�ӫ��СA���V�s����Ū�r��(���N���V"How"������)
    strcpy(strB[0], "What"); //����
    return 0;
}*/

//�G���r���}�C �ѨM��k
/*
int main(){
    char strA[3][4] = {"How","are","you"};
    char *strB[3] = {strA[0], strA[1], strA[2]};

    strB[2][0] = 'Y'; //�i�H

    //strB[0] = "What"; //����ĳ�A�]��"What"�|�নconst char�u��Ū
    char strC[5] = "What";
    strB[0] = strC;
    strB[0][0] = 'w'; //�i�H
    return 0;
}*/

//��J���w�ӼƦr���L�X(END����)
/*
#include <string.h> //strcmp�i�H�����J�r��M�ؼЦr�� strcmp(input, target)�A�Y�۵��h�^��0
                    //strcpy���e���L strcpy(�w�Ƽg��m, �ؼЦr��)
int main(){
    char str[100][5];
    char input[5];
    int len = 0; //��r��ƶq

    while (1){
        scanf("%s", input); //�`�N���Υ[&�A�]���r���}�C�����N�O���V�Ĥ@�Ӥ���������
        if (strcmp(input, "END") == 0) break;
        strcpy(str[len], input);
        len++;
    }
    printf("-------\n");
    int i;
    for (i=0;i<len;i++){
        printf("%s ", str[i]);
    }
    printf("\n");
    return 0;
}*/

//��J���w�ӼƦr���L�X(END����) (�u��)
/*
#include <string.h> //strlen�|�^�Ǧr�����(���t'\0') str(input)

int main(){
    char raw[5000]; //�`�@5000�Ӧr���Ŷ�
    char input[50];
    char *str[100]; //�����C�@�ӳ�r�A��K�s��
    int size = 0; //�ΤF�h�֦r���Ŷ�
    int len = 0; //���X�ӳ�r

    while (1){
        scanf("%s", input);
        if (strcmp(input, "END") == 0) break;
        str[len] = &raw[size];
        strcpy(&raw[size], input);
        size += strlen(input) + 1; //�O�o�[�W'\0'
        len++;
    }

    printf("--------\n");
    for (int i=0;i<len;i++){
        printf("%s ", str[i]);
    }
    printf("\n(%d, %d)", len, size);
    return 0;
}*/
