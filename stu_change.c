#include "student.h"

int stu_change(List* plist)
{
    Node* p = NULL;
    int n;
    while (1){
        system("cls");
        printf("ע�⣺�޸�ǰ���Ȳ���Ҫ�޸ĵ�ѧ��\n\n");
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
        if ( n == 0){
            printf("���˳���ѯ����\n\n");
            system( "pause");
            return -1;
        }
       // system("cls");
        switch (n) {
            case 1:
                p = stu_search_num(plist);
                break;
            case 2:
                p = stu_search_nam(plist);
                break;
            default :
                printf("��Ч��ѡ��,������ѡ��");
                break;
        }
        if ( p ){
            int sign = 1;
            printf("\n\t\t\t\t---------------*��  ��*---------------\n\n\n");
            printf("\t\t\t\t          1.ѧ��         2.����\n\n");
            printf("\t\t\t\t          3.����         4.�Ա�\n\n");
            printf("\t\t\t\t          5.����         6.��ַ\n\n");
            printf("\t\t\t\t          7.�绰         8.����\n\n");
            printf("\t\t\t\t          0.�������˵�\n\n\n");
            printf("\t\t\t\t-----------------------------------------\n\n");
            printf("��������Ҫ���ĵ���Ϣ����ţ�");
            scanf("%d", &n);
            if (n == 0) {
                printf("\n�˳��ɹ���\n\n");
                system("pause");
                break;
            }
            while (1) {
                system("cls");
                printf("����������Ϣ��");
                switch (n) {
                case 1:
                    scanf("%lld", &p->data.num);
                    break;
                case 2:
                    scanf("%s", p->data.name);
                    break;
                case 3:
                    scanf("%d", &p->data.age);
                    break;
                case 4:
                    scanf("%d", &p->data.sex);
                    break;
                case 5:
                    scanf("%d%d%d", &p->data.birst.year, &p->data.birst.month, &p->data.birst.day);
                    break;
                case 6:
                    scanf("%s", p->data.address);
                    break;
                case 7:
                    scanf("%lld", &p->data.tele);
                    break;
                case 8:
                    scanf("%s", p->data.email);
                default:
                    printf("�����ѡ��");
                    sign = 0;
                    system("pause");
                }
                if (sign == 1) {
                    break;
                }
            }
            system("cls");
            printf("�޸ĳɹ���\n");
            dele_save(plist);
        }
    }

}

