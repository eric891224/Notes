#include <stdio.h>

//�����ܼƫŧi(�x�s�O�����m����ƫ��O)
/*int main(){
    int count = 9;
    int *countAddr; //(int *)����ƫ��СA�N��countAddr�x�s����ƫ��O(int)���O�����m
    countAddr = &count; //&�����}�B��l�A�|���o�ܼƪ��O�����m

    //�`�NcountAddr�����O��(int *)�A&count�����O��(int *)
    int a;
    int *b;

    a = count; //(int) = (int)
    //b = count; //error: (int *) = (int)
    //a = &count;//error: (int) = (int *)
    b = &count;//(int *) = (int *)
    return 0;
}*/

//�����B��l(*)�A���o�ӰO�����m���ܼ�
/*int main(){
    int count = 9;
    int * countAddr = &count; //�`�N����(int *)��ƫ��O
    int result = *countAddr;  //�`�N����(*)���}�B��l

    printf("%d\n", result);

    *countAddr = 10;

    printf("%d\n", count); //���Хi�H���ܭ쥻�ܼ�
    printf("%d\n", result);
    return 0;
}*/

//�ʽ�
/*
int count = 9;
int *countAddr = &count;
int result = *countAddr  //�H�U�T��@�ά۵�
    result = *&count     //*&�۾F�i���(�����count����m�A�A�ݸӦ�m���ܼƬ���)
    result = count

*countAddr = 10; //�H�U���@�ά۵�
count = 10;

*&*&*&*&*&result = 20; //�H�U���۵�
result = 20;
/*


