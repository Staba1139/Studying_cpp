#include <cstring>
#include "List3-1_Employee.h"

int main(){

    //�I�u�W�F�N�g�쐬
    Employee tanaka;

    //�����o�֐��Ƀf�[�^��ݒ�
    tanaka.number = 1234;
    strcpy(tanaka.name, "�c����Y");
    tanaka.salary = 200000;

    //�����o�֐����Ăяo��
    tanaka.showData();

    return 0;

}
