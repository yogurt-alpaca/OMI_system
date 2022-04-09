#include "student.h"

int stu_change(List* plist)
{
    Node* p = NULL;
    int n;
    while (1){
        system("cls");
        printf("注意：修改前请先查找要修改的学生\n\n");
        system("pause");
        printf("\n\t\t\t\t--------------*查询菜单*---------------\n\n\n");
        printf("\t\t\t\t        1.按照学号查询学生信息\n\n");
        printf("\t\t\t\t        2.按照姓名查询学生信息\n\n");
        printf("\t\t\t\t        0.退出查询功能，返回主页菜单\n\n\n");
        printf("\t\t\t\t----------------------------------------\n\n");
        while (1) {
            printf("请根据您的需求输入相应的数字:");
            scanf("%d", &n);
            if (n != 0 && n != 1 && n != 2) {
                printf("\n您输入的数字不合法，请尝试重新输入！\n\n");
            }
            else {
                break;
            }
        }
        if ( n == 0){
            printf("已退出查询功能\n\n");
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
                printf("无效的选择,请重新选择！");
                break;
        }
        if ( p ){
            int sign = 1;
            printf("\n\t\t\t\t---------------*菜  单*---------------\n\n\n");
            printf("\t\t\t\t          1.学号         2.姓名\n\n");
            printf("\t\t\t\t          3.年龄         4.性别\n\n");
            printf("\t\t\t\t          5.生日         6.地址\n\n");
            printf("\t\t\t\t          7.电话         8.邮箱\n\n");
            printf("\t\t\t\t          0.返回主菜单\n\n\n");
            printf("\t\t\t\t-----------------------------------------\n\n");
            printf("请输入需要更改的信息的序号：");
            scanf("%d", &n);
            if (n == 0) {
                printf("\n退出成功！\n\n");
                system("pause");
                break;
            }
            while (1) {
                system("cls");
                printf("请输入新信息：");
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
                    printf("错误的选择！");
                    sign = 0;
                    system("pause");
                }
                if (sign == 1) {
                    break;
                }
            }
            system("cls");
            printf("修改成功！\n");
            dele_save(plist);
        }
    }

}

