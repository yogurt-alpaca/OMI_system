#include "student.h"

Node* stu_search_nam(List* plist)
{
    char name[20];
    printf("������ѧ������:");
    scanf("%s", name);
    system("cls");
    Node* p;
    p = plist->head;
    int sign;
    while (p) {
        if (strcmp(p->data.name, name) == 0) {
            printf("����Ϊ%s��ѧ������ϢΪ��\n", name);
            printf(" ѧ��:%lld\n ����:%s\n ����:%d\n", p->data.num, p->data.name, p->data.age);
            if (p->data.sex == 1) {
                printf(" �Ա�:��\n");
            } else if (p->data.sex == 0) {
                printf(" �Ա�:Ů\n");
            }
            printf(" ��������:%d��%d��%d��\n ��ַ:%s\n �绰:%lld\n ����:%s\n", p->data.birst.year,
                   p->data.birst.month,p->data.birst.day,p->data.address, p->data.tele, p->data.email);
            break;
        } else {
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
