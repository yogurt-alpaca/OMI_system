#include "student.h"

void stu_skim(List* plist)           //���ȫ��ѧ������Ϣ
{
    Node* p;
    int sign = 0;
    p = plist->head;
    if ( p->next ) {
        printf("��������\n\n");
        while ( p->next ) {
            printf("��%d��ѧ��:\n", ++sign);
            printf("  ѧ��:%lld\n  ����:%s\n  ����:%d\n", p->data.num, p->data.name, p->data.age);
            if ( p->data.sex == 1) {
                printf("  �Ա�:��\n");
            } else if (p->data.sex == 0) {
                printf("  �Ա�:Ů\n");
            }
            printf("  ��������:%d��%d��%d��\n  ��ַ:%s\n  �绰:%lld\n  ����:%s\n", p->data.birst.year, p->data.birst.month,
                   p->data.birst.day,
                   p->data.address, p->data.tele, p->data.email);
            p = p->next;
        }
        printf("\nȫ��ѧ���������ϣ�\n");
    }
    if (sign == 0) {
        printf("\n��δ¼����Ϣ,����¼����Ϣ�ٽ��в�ѯ!\n\n");
    }
    system("pause");
}

