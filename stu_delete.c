#include "student.h"

void stu_delete(List* plist)
{
    int n;
    while (1){
        system("cls");
        printf("ע��ɾ��֮ǰ��Ҫ�Ȳ�ѯ�Ƿ��д�ѧ����Ϣ\n\n");
        system("pause");
        printf("\n\t\t\t\t--------------*��ѯ�˵�*---------------\n\n\n");
        printf("\t\t\t\t        1.����ѧ�Ų�ѯѧ����Ϣ\n\n");
        printf("\t\t\t\t        2.����������ѯѧ����Ϣ\n\n");
        printf("\t\t\t\t        0.�˳���ѯ���ܣ�������ҳ�˵�\n\n\n");
        printf("\t\t\t\t----------------------------------------\n\n");
        while (1) {
            printf("�������������������Ӧ������:");
            scanf("%d", &n);
            if (n != 0 && n != 1 && n != 2) {
                printf("\n����������ֲ��Ϸ����볢���������룡\n\n");
            }
            else {
                break;
            }
        }
        system("cls");
        if ( n == 0 ){
            break;
        }
        switch (n) {
            case 1:
                stu_delete_num(plist);
                break;
            case 2:
                stu_delete_nam(plist);
                break;
            default:
                printf("�����ѡ��,������ѡ��");
                system("pause");
        }
    }
    printf("���˳�ɾ������\n");
    system("pause");
}

