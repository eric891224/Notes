#include <stdio.h>

//�r���}�C(�q�`�H\0����)
/*void str_print(char str[]){
    int i;
    for (i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int main(){
    char ch = 'H'; //�r�����O
    char str[] = {'H','e','l','l','o','\0'}; //�r���}�C

    str_print(str);
    return 0;
}*/

//��"�r�ꤺ�e"��l�Ʀr���}�C�Ac�|�b�����۰ʸɤW\0�C�L�X�ɥi��%s�����L�X�r���}�C
/*void str_print(char str[]){
    printf("%s\n",str);
}

int main(){
    char str[] = "Hello world";
    str_print(str);
    return 0;
}*/

//�p��r�����
/*int str_len(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char str[] = "Hello world";
    printf("Length: %zu\n", sizeof(str)); //12, �]���]�t\0
    printf("Length: %d\n", str_len(str)); //11
}*/

//����LŪ�J��r
/*void str_read(char[]);

int main(){
    char str[15];
    str_read(str);
    printf("%s\n", str);
    return 0;
}

void str_read(char str[]){
    int i = 0;
    while (1){
        scanf("%c", &str[i]);
        if (str[i] == '\n'){
            break;
        }
        i++;
    }
    str[i] = '\0';
}*/

//�P�_scanf�O�_���\Ū�J���
/*int main(){
    int number;
    if (scanf("%d", &number) == 1){ //scanf�^�ǭȪ��\Ū��X�����
        printf("%d", number);
    }
    return 0;
}*/

int main(){
    int num;
    while (scanf("%d", &num) != 1){
        printf("Invalid input\n");
        scanf("%d", &num);
    }
    printf("%d", num);
    return 0;
}

