#include "student.h"

void stu_search(List* plist)
{
    int n;
    while (1){
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
        if ( n == 0){
            system("cls");
            break;
        }
        system("cls");
        switch (n) {
            case 1:
                stu_search_num(plist);
                break;
            case 2:
                stu_search_nam(plist);
                break;
            default:
                printf("�����ѡ��\n");
                system("pause");
                system("cls");
        }
    }
    printf("\n�ɹ��˳���ѯ��\n\n");
    system("pause");
}


