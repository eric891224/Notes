#include <stdio.h>

//�r���P����
/*
int main(){
    char strA[] = "test";               //�H�U���ۦP
    char strB[] = {'t','e','s','t','\0'};

    printf("%s\n", strA);
    printf(strA); //�����૬������
    printf("\n");
    printf(strB); //�����૬������
    printf("\n");

    printf("test\n"); //�r���r���`�Ʒ|�����૬���r������
    //printf({'t','e','s','t','\0'}); //error:���|�૬������

    char *strC = "test";
    //char *strD = {'t','e','s','t','\0'} //error

    printf((char[]){'t','e','s','t','\0'}); //C99:�ƦX�r���`��
    return 0;
}*/

//�r���r���`�Ʃʽ�
/*
int main(){
    char strA[] = "test";
    char *strB = "test"; //�r���r���`�������૬���r�����СA���O�u��Ū����g

    strA[0] = 'T';
    //strB[0] = 'T'; //error! �u�ण��g�A���w�q�欰

    //strA = "Test"; //error! �}�C�L�k��ȡA���w�q�欰
    strB = "Test"; //�i�H�A�]��Test�|�����૬�����СA���@�˥u��Ū����g
}*/

//const �׹��r(�Hconst��l�ƪ��ܼƥu���Ū�ݩ�)
/*
int a = 3;
const int b = 5;

a = 4;
//b = 6; //error! ��Ū

int c[3] = {3,4,5};
const int d[3] = {5,6,7};

c[0] = 4;
//d[0] = 6; //error! ��Ū
*/

//const (type) * : const �i�H���ӭ׹��ܼơA�T�O���ܼƥu��Ū�����g
/*
int main(){
    char strA[] = "test";
    char *strB = "test" ;
    const char *strC = "test";

    strA[0] = 'T'; //�i�H
    //strB[0] = 'T'; //error! ���w�q�欰
    //strC[0] = 'T'; //error! �sĶ����

    strA = strB; //error �}�C�L�k���
    strA = strC; //error �P�W
    strB = strA; //�i�H (char *) = (char[])
    strB = strC; //error (char *) = (const char *) �YstrB���ostrC���ȡA�N�i�H��strB�ק�strC�ҥN���ܼơA�٬ޡA�G���w�q�欰
    strC = strA; //�i�H (const char *) = (char[]) �䤤char[]�N�|�����૬�����СA�A�૬���u��Ū�B���i�g����ƫ��A(const char *)
    strC = strB; //�i�H (const char *) = (char *) �䤤(char *) �N�|�૬��(const char *)�u��Ū���i�g
    return 0;
}*/

//�r��ƻs
/*
#include <string.h>
//shallow copy: copy�P�쥻���P�@�ӡA�ק�copy�|�P�ɧ��ܭ쥻���ܼ�
//deep copy: copy�P�쥻�U�ۿW��
//strcpy : (char * destination, const char * source)

int main(){
    const char *source = "test"; //�H�U���ҥi�A�G�ܤ@�A�W��test�|����const char *�M���Jstrcpy
    char source[5] = "test";     //�U�̬��@char�}�C�A��Jstrcpy��~��const char *
                                 //source�����I�O�u�ݭn�iŪ�N�n

    char destination[5]; //��Jstrcpy��~��char *(�iŪ�i�g�A���I�O�i�H�g�J)
    //char *destination; //error! �]�����t�m�O����Ŷ���destination

    strcpy(destination, source);

    printf("%s\n", destination);
    return 0;
}
*/
