#include <stdio.h>

//��J���N��ƫ�@�_��X(�ϰ}�C�ܤj�G���ͷs�}�C)(�ʺA�t�m�O����)(����ʺA�O����)
/*
#include <stdlib.h> //malloc�禡�i�ʺA�t�m�O����void* malloc((size_t) size);
                    //free�禡�i����ʺA�t�m���O����void free((void*) ptr);
int main(){
    int *numbers = 0;//�Ϋ��Ш��x�s�}�C��������m�A�ū���0(��null)
    int length = 0;

    while (1){
        int input;
        scanf("%d", &input);
        if (input==0) break;

        //int larger[length+1]; �쥻����k�|�y���U��printf���w�q�欰
        int *larger = malloc(sizeof(int) * (length+1)); //���ͤj�@�檺�s�}�C�A�`�N����larger�����СA���Vmalloc�t�m���O�����m�}�Y
        for (int i=0;i<length;i++) larger[i] = numbers[i];//�ƻs�N�}�C��s�}�C
        free(numbers); //�쥻numbers���O�����m�b�U�@�j�餣�|�A�ϥΡA�G����O����
        numbers = larger;//�۷��&larger[0]
        numbers[length] = input;
        length++;
    } //larger�O����b���Q����A�y���U��printf�X�{���w�q�欰(numbers�s�����O�����m�w�Q����)�A�G�ϥΰʺA�t�m�O����
      //�ϥ�malloc�t�m���O����b�����|�Q����

    printf("Numbers: ");
    for (int i=0;i<length;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}*/

//�Ѫk�G
#include <stdlib.h>//realloc�禡���s�t�m�O����void* realloc((void*) ptr, (size_t) size);
                   //ptr����malloc�Ψ�L�ʺA�O����禡������m�Fsize���s�O����Ŷ��j�p
int main(){
    int *numbers = 0;//�Ϋ��Ш��x�s�}�C��������m�A�ū���0(��null)
    int length = 0;

    while (1){
        int input;
        scanf("%d", &input);
        if (input==0) break;

        //int larger[length+1]; �쥻����k�|�y���U��printf���w�q�欰
        numbers = realloc(numbers, (sizeof(int))*(length+1)); //�ϥ�realloc���s�t�m�O����


        numbers[length] = input;
        length++;
    } //larger�O����b���Q����A�y���U��printf�X�{���w�q�欰(numbers�s�����O�����m�w�Q����)�A�G�ϥΰʺA�t�m�O����
      //�ϥ�malloc�t�m���O����b�����|�Q����

    printf("Numbers: ");
    for (int i=0;i<length;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
