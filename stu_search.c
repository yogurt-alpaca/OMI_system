#include "student.h"

void stu_search(List* plist)
{
    int n;
    while (1){
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
                printf("错误的选择！\n");
                system("pause");
                system("cls");
        }
    }
    printf("\n成功退出查询！\n\n");
    system("pause");
}


