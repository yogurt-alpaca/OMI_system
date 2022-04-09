#include "student.h"

Node* stu_search_nam(List* plist)
{
    char name[20];
    printf("请输入学生姓名:");
    scanf("%s", name);
    system("cls");
    Node* p;
    p = plist->head;
    int sign;
    while (p) {
        if (strcmp(p->data.name, name) == 0) {
            printf("姓名为%s的学生的信息为：\n", name);
            printf(" 学号:%lld\n 姓名:%s\n 年龄:%d\n", p->data.num, p->data.name, p->data.age);
            if (p->data.sex == 1) {
                printf(" 性别:男\n");
            } else if (p->data.sex == 0) {
                printf(" 性别:女\n");
            }
            printf(" 出生日期:%d年%d月%d日\n 地址:%s\n 电话:%lld\n 邮箱:%s\n", p->data.birst.year,
                   p->data.birst.month,p->data.birst.day,p->data.address, p->data.tele, p->data.email);
            break;
        } else {
            p = p->next;
        }
    }
    if (!p) {
        printf("无此学生信息。\n");
    }
    system("pause");
    system("cls");
    return p;
}
