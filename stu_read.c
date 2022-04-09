#include "student.h"

void stu_read(List *plist) //����ǰ���ļ����ݶ�ȡ�������ڴ�
{
    plist->head = plist->tail = NULL;
    FILE *fp;
    fp = fopen("student","r");
    if(fp==NULL) {
        printf("�ļ�������,������ֹ\n");
        exit(0);
    }
    while(!feof(fp))
    {
        Node* p=(Node *)malloc(sizeof(Node));
        fread(p, sizeof(Node),1,fp);
        if (!plist->head) {
            plist->head = p;
            plist->tail = p;
            p->next = NULL;
        }else {
            plist->tail->next = p;
            plist->tail = plist->tail->next;
            p->next = NULL;
        }
    }
    fclose(fp);
}

