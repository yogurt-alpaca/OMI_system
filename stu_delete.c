#include "student.h"

void stu_delete(List* plist)
{
    int n;
    while (1){
        system("cls");
        printf("注：删除之前需要先查询是否有此学生信息\n\n");
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
                printf("错误的选择！,请重新选择！");
                system("pause");
        }
    }
    printf("已退出删除功能\n");
    system("pause");
}

