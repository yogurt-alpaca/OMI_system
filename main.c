#include "student.h"
int main()
{
    List list;
    int flag;
    while (1) {
        system("cls");
        menu();
        printf("请输入您的选择：");
        scanf("%d", &flag);
        system("cls");
        switch ( flag ) {
            case 0:
                exit(0);
            case 1:
                stu_add(&list);
                printf("\n");
                break;
            case 2:
                stu_read(&list);
                stu_sort(&list);
                printf("\n");
                break;
            case 3:
                stu_read(&list);
                stu_search(&list);
                printf("\n");
                break;
            case 4:
                stu_read(&list);
                stu_delete(&list);
                printf("\n");
                break;
            case 5:
                stu_read(&list);
                stu_change(&list);
                printf("\n");
                break;
            case 6:
                stu_read(&list);
                stu_skim(&list);
                printf("\n");
                break;
            case 7:
                stu_read(&list);
                addStu(&list);
                printf("\n");
                break;
            case 8:
                stu_clear();
                printf("\n");
                break;
            case 9:
                help();
                printf("\n");
                break;
            default:
                printf("不存在该选择，请重新输入");
        }
    }
}
