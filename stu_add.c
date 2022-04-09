#include "student.h"

void stu_add(List* plist)  //录入学生信息
{
    printf("--------------*录入学生信息菜单*--------------\n\n");
    int index = 0,Year,Month,Day,Sex,Age;
    long long Num;
    while (1) {
        printf("请输入第%d学生信息(输入学号0保存并退出，返回菜单)：\n",++index);
        while (1){
            printf("  学号：");
            scanf("%lld", &Num);
            if( Num >= 0 ){
                break;
            } else{
                printf("\n  您输入的学号不合理，请重新输入！\n");
            }
        }
        if ( Num == 0) {
            system("cls");
            break;
        }
        if (index == 1) {
            plist->head = plist->tail = NULL;
        }
        Node* p = (Node*)malloc(sizeof(Node));
        p->data.num = Num;
        printf("  姓名：");
        scanf("%s", p->data.name);
        while (1){
            printf("  年龄：");
            scanf("%d", &Age);
            if (Age > 0){
                p->data.age = Age;
                break;
            } else{
                printf("\n  您输入的年龄不合理，请重新输入！\n");
            }
        }
        while (1){
            printf("  性别(男生为1女生为0)：");
            scanf("%d",&Sex);
            if (Sex == 0 || Sex == 1){
                p->data.sex = Sex;
                break;
            } else{
                printf("\n  您输入的数字无效，请按照提示重新输入！\n");
            }
        }
        while (1){
            printf("  出生日期：");
            scanf("%d %d %d",&Year,&Month,&Day);
            if (judge(Year,Month,Day)){
                p->data.birst.year = Year;
                p->data.birst.month = Month;
                p->data.birst.day = Day;
                break;
            } else{
                printf("\n  您输入的出生日期不合理，请重新输入！\n");
            }
        }
        printf("  地址：");
        scanf("%s", p->data.address);
        printf("  电话：");
        scanf("%lld", &p->data.tele);
        printf("  邮箱：");
        scanf("%s", p->data.email);
        //find the last
        if (!plist->head) {
            plist->head = p;
            plist->tail = p;
        }
        else {
            plist->tail->next = p;
            plist->tail = plist->tail->next;
        }
        p->next = NULL;
        system("cls");
    }
    stu_save(plist);
}