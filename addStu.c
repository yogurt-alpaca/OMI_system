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
        printf("  ��¼��%d��ѧ��\n\n",index);
        pTail = tail_find(plist->head);
        free(pTail->next);
        pTail->next =NULL;
        int Year,Month,Day,Sex,Age;
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
            Node* q = (Node*)malloc(sizeof(Node));
            q->data.num = Num;
            printf("  ������");
            scanf("%s", q->data.name);
            while (1){
                printf("  ���䣺");
                scanf("%d", &Age);
                if (Age > 0){
                    q->data.age = Age;
                    break;
                } else{
                    printf("\n  ����������䲻�������������룡\n");
                }
            }
            while (1){
                printf("  �Ա�(����Ϊ1Ů��Ϊ0)��");
                scanf("%d",&Sex);
                if (Sex == 0 || Sex == 1){
                    q->data.sex = Sex;
                    break;
                } else{
                    printf("\n  �������������Ч���밴����ʾ�������룡\n");
                }
            }
            while (1){
                printf("  �������ڣ�");
                scanf("%d %d %d",&Year,&Month,&Day);
                if (judge(Year,Month,Day)){
                    q->data.birst.year = Year;
                    q->data.birst.month = Month;
                    q->data.birst.day = Day;
                    break;
                } else{
                    printf("\n  ������ĳ������ڲ��������������룡\n");
                }
            }
            printf("  ��ַ��");
            scanf("%s", q->data.address);
            printf("  �绰��");
            scanf("%lld", &q->data.tele);
            printf("  ���䣺");
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
        printf("\n��������¼���ѧ����Ϣ,�����ѽ�������¼�빦��\n\n");
        system("puase");
        system("cls");
        stu_add(plist);
    }
}

