#include "student.h"

void stu_delete_num(List* plist)
{
    Node* p = plist->head;
    long long num;
    printf("\n������Ҫɾ����ѧ����ѧ��:");
    scanf("%lld",&num);
    system("cls");
    if (p){
        while (p){
            if ( p->data.num == num ){
                break;
            } else{
                p = p->next;
            }
        }
    }
    if (p) {
        if (p == plist->head) {
            plist->head = p->next;
            free(p);
        } else if ( p == plist->tail ){
            Node *r = plist->head;
            while (r){
                if (r->next == plist->tail ){
                    r = plist->tail;
                    p = NULL;
                    free(p);
                    break;
                } else {
                    r = r->next;
                }
            }
        }
        else {
            Node *q = plist->head;
            while (q){
                if(q->next == p){
                    q->next = p->next;
                    p = NULL;
                    free(p);
                    break;
                } else{
                    q = q->next;
                }
            }
        }
        printf("ɾ���ɹ�\n");
        dele_save(plist);
    } else{
        printf("δ�ҵ�������Ϣ\n");
    }
    system("pause");
}

