#include "student.h"

void stu_delete_nam(List* plist)       //��ѧ������ɾ��ѧ����Ϣ
{
    Node* p = plist->head;
    char name[10];
    printf("������Ҫɾ����ѧ������:");
    scanf("%s",name);
    system("cls");
    if (p){
        while (p){
            if(strcmp(p->data.name,name) == 0){
                printf("���ҵ���ѧ����Ϣ��");
                break;
            } else {
                if (p->next == NULL){
                    printf("δ�ҵ���ѧ����Ϣ��");
                    system("pause");
                    system("cls");
                    return;
                } else{
                    p = p->next;
                }
            }
        }
    } else {
        printf("�������κ�ѧ����Ϣ�����Ƚ�����Ϣ¼�룡");
        system("pause");
        return;
      }
    if (p) {
        if (p == plist->head) {
            plist->head = p->next;
            free(p);
        } else if( p == plist->tail ){
            Node *r = plist->head;
            while (r){
                if( r->next == plist->tail ){
                    r = plist->tail;
                    p = NULL;
                    free(p);
                    break;
                } else{
                    r = r->next;
                }
            }

        } else {
            Node *q = plist->head;
            while (q){
                if (q->next == p){
                    q->next = p->next;
                    p = NULL;
                    free(p);
                    break;
                } else {
                    q = q->next;
                }
            }
        }
        printf("ɾ���ɹ���\n");
        dele_save(plist);
    }
}

