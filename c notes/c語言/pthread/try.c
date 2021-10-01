#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

//-------------------------------------------------------------------------------------------
//pthread_create
/*
�w�q�Gint pthread_create(pthread_t *tid , const pthread_attr_t *attr , void *(*function)(void *) , void *argument)
1)  pthread_t *tid��pthread�����СA�b�ϥ�Thread���e�����n���ŧi�@��pthread_t���ܼ�
2)  const pthread_attr_t *attr����Thread���ݩʡA�w�]�ONULL�A�p�G�S����L�S���ݨD������JNULL�Y�i
3)  void *(*function)(void *)��Function pointer�A�o��n��J�A�n���檺Function
4)  void *argument��Function pointer�ҭn�a���ѼơA�Y�L�ݨD��JNULL
�^�ǭ�: �p�G���榨�\�h�^��0�A�p�G���楢�ѫh�^�ǿ��~�N�X
*/
//-------------------------------------------------------------------------------------------
//pthread_exit
/*
�w�q�Gvoid pthread_exit(void *value_ptr) �@�ΡG�����@��Thread�A���a���@�ӰѼ�
1)  void *value_ptr�Ψӳ]�w���榨�\�ɸ�Thread�|�^�Ǫ��ȡA�o�ӭȥi��pthread_join()�o��Function�Ө��o
�^�ǭ�: ���|�^�ǥ����

EX�Gpthread_exit(NULL);
*/
//-------------------------------------------------------------------------------------------
//pthread_cancel
/*
�w�q�Gint pthread_cancel(pthread_t thread) �@�ΡG�����@�ӫ��w��Thread�A���a���@�ӰѼ�
1)  pthread_t thread���n������Thread
�^�ǭ�: �p�G���榨�\�h�^��0�A�p�G���楢�ѫh�^�ǿ��~�N�X

EX�Gpthread_cancel(thread1);
*/
//-------------------------------------------------------------------------------------------
//pthread_join
/*
�@�ΡG�Ȱ��ثe����pthread_join��Thread�A����ؼ�Thread���槹������A
      �ثe����pthread_join��Thread�~�|�~�����A���a��2�ӰѼ�

�w�q�Gint pthread_join(pthread_t thread, void **value_ptr)
1)  pthread_t thread���n���ݪ��ؼ�Thread
2)  void **value_ptr�ΨӨ��o�ؼ�Thread���^�ǭ�
�^�ǭ�: �p�G���榨�\�h�^��0�A�p�G���楢�ѫh�^�ǿ��~�N�X
*/
//-------------------------------------------------------------------------------------------

//Thread�禡
void *thread_Fcn(void *parm){
    /*
        �A��Thread�n���檺�{���g�b�o��
    */
    int j=0;
    while (j<30){
        printf("thread\n");
        j++;
    }

    //�p�GThread���e���]���F�A�N�I�s�o�Ө禡�����o��Thread
    pthread_exit(NULL);
}

int main(int argc, char **argv)
{
    pthread_t thread_1;
    int rc1=0;

    //�إߤ@�� thread
    rc1=pthread_create(&thread_1,NULL,thread_Fcn,NULL);
    if(rc1)
    {
        //�i���˴��A�n�T�wThread���Q���T�إ�
        printf("ERROR thread create!");
    }
    int i=0;
    while (i<30){
        printf("main\n");
        i++;
    }
    //����thread���浲���A�_�h�N�@������
    rc1=pthread_join(thread_1,NULL);

    return 0;
}
