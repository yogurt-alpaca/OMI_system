#include "student.h"

Node * stu_search_num(List* plist)
{
    long long  number;
    printf("������ѧ��ѧ�ţ�");
    scanf("%lld", &number);
    system("cls");
    Node* p = plist->head;
    while (p) {
        if (p->data.num == number) {
            printf("ѧ��Ϊ%lld��ѧ������ϢΪ��\n", number);
            printf(" ѧ��:%lld\n ����:%s\n ����:%d\n", p->data.num, p->data.name, p->data.age);
            if (p->data.sex == 1) {
                printf(" �Ա�:��\n");
            } else if (p->data.sex == 0) {
                printf(" �Ա�:Ů\n");
            }
            printf(" ��������:%d��%d��%d��\n ��ַ:%s\n �绰:%lld\n ����:%s\n", p->data.birst.year,
                   p->data.birst.month,p->data.birst.day,p->data.address, p->data.tele, p->data.email);
            break;
        } else{
            p = p->next;
        }
    }
    if (!p) {
        printf("�޴�ѧ����Ϣ��\n");
    }
    system("pause");
    system("cls");
    return p;
}

