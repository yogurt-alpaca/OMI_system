#include "student.h"

void stu_add(List* plist)  //¼��ѧ����Ϣ
{
    printf("--------------*¼��ѧ����Ϣ�˵�*--------------\n\n");
    int index = 0,Year,Month,Day,Sex,Age;
    long long Num;
    while (1) {
        printf("�������%dѧ����Ϣ(����ѧ��0���沢�˳������ز˵�)��\n",++index);
        while (1){
            printf("  ѧ�ţ�");
            scanf("%lld", &Num);
            if( Num >= 0 ){
                break;
            } else{
                printf("\n  �������ѧ�Ų��������������룡\n");
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
        printf("  ������");
        scanf("%s", p->data.name);
        while (1){
            printf("  ���䣺");
            scanf("%d", &Age);
            if (Age > 0){
                p->data.age = Age;
                break;
            } else{
                printf("\n  ����������䲻�������������룡\n");
            }
        }
        while (1){
            printf("  �Ա�(����Ϊ1Ů��Ϊ0)��");
            scanf("%d",&Sex);
            if (Sex == 0 || Sex == 1){
                p->data.sex = Sex;
                break;
            } else{
                printf("\n  �������������Ч���밴����ʾ�������룡\n");
            }
        }
        while (1){
            printf("  �������ڣ�");
            scanf("%d %d %d",&Year,&Month,&Day);
            if (judge(Year,Month,Day)){
                p->data.birst.year = Year;
                p->data.birst.month = Month;
                p->data.birst.day = Day;
                break;
            } else{
                printf("\n  ������ĳ������ڲ��������������룡\n");
            }
        }
        printf("  ��ַ��");
        scanf("%s", p->data.address);
        printf("  �绰��");
        scanf("%lld", &p->data.tele);
        printf("  ���䣺");
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