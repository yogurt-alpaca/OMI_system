#include "student.h"

void stu_delete_nam(List* plist)       //按学生姓名删除学生信息
{
    Node* p = plist->head;
    char name[10];
    printf("请输入要删除的学生姓名:");
    scanf("%s",name);
    system("cls");
    if (p){
        while (p){
            if(strcmp(p->data.name,name) == 0){
                printf("已找到该学生信息！");
                break;
            } else {
                if (p->next == NULL){
                    printf("未找到该学生信息！");
                    system("pause");
                    system("cls");
                    return;
                } else{
                    p = p->next;
                }
            }
        }
    } else {
        printf("不存在任何学生信息，请先进行信息录入！");
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
        printf("删除成功！\n");
        dele_save(plist);
    }
}

