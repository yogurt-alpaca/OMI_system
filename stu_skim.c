#include "student.h"

void stu_skim(List* plist)           //输出全部学生的信息
{
    Node* p;
    int sign = 0;
    p = plist->head;
    if ( p->next ) {
        printf("输出结果：\n\n");
        while ( p->next ) {
            printf("第%d名学生:\n", ++sign);
            printf("  学号:%lld\n  姓名:%s\n  年龄:%d\n", p->data.num, p->data.name, p->data.age);
            if ( p->data.sex == 1) {
                printf("  性别:男\n");
            } else if (p->data.sex == 0) {
                printf("  性别:女\n");
            }
            printf("  出生日期:%d年%d月%d日\n  地址:%s\n  电话:%lld\n  邮箱:%s\n", p->data.birst.year, p->data.birst.month,
                   p->data.birst.day,
                   p->data.address, p->data.tele, p->data.email);
            p = p->next;
        }
        printf("\n全部学生已输出完毕！\n");
    }
    if (sign == 0) {
        printf("\n尚未录入信息,请先录入信息再进行查询!\n\n");
    }
    system("pause");
}

