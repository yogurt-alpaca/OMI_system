#include "student.h"

void addStu(List* plist)
{
    int index = 0;
    Node *pTail;
    Node *p = plist->head;
    if (p->next){
        while (p->next){
            ++index;
            p = p->next;
        }
        printf("  已录入%d名学生\n\n",index);
        pTail = tail_find(plist->head);
        free(pTail->next);
        pTail->next =NULL;
        int Year,Month,Day,Sex,Age;
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
            Node* q = (Node*)malloc(sizeof(Node));
            q->data.num = Num;
            printf("  姓名：");
            scanf("%s", q->data.name);
            while (1){
                printf("  年龄：");
                scanf("%d", &Age);
                if (Age > 0){
                    q->data.age = Age;
                    break;
                } else{
                    printf("\n  您输入的年龄不合理，请重新输入！\n");
                }
            }
            while (1){
                printf("  性别(男生为1女生为0)：");
                scanf("%d",&Sex);
                if (Sex == 0 || Sex == 1){
                    q->data.sex = Sex;
                    break;
                } else{
                    printf("\n  您输入的数字无效，请按照提示重新输入！\n");
                }
            }
            while (1){
                printf("  出生日期：");
                scanf("%d %d %d",&Year,&Month,&Day);
                if (judge(Year,Month,Day)){
                    q->data.birst.year = Year;
                    q->data.birst.month = Month;
                    q->data.birst.day = Day;
                    break;
                } else{
                    printf("\n  您输入的出生日期不合理，请重新输入！\n");
                }
            }
            printf("  地址：");
            scanf("%s", q->data.address);
            printf("  电话：");
            scanf("%lld", &q->data.tele);
            printf("  邮箱：");
            scanf("%s", q->data.email);
            if (!pTail->next){
                pTail->next = q;
                plist->tail = q;
            } else{
                plist->tail->next = q;
                plist->tail = plist->tail->next;
            }
            q->next = NULL;
            system("cls");
        }
        stu_save(plist);
    } else{
        printf("\n不存在已录入的学生信息,现在已进入重新录入功能\n\n");
        system("puase");
        system("cls");
        stu_add(plist);
    }
}

