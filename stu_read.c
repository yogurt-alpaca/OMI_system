#include "student.h"

void stu_read(List *plist) //运行前把文件内容读取到电脑内存
{
    plist->head = plist->tail = NULL;
    FILE *fp;
    fp = fopen("student","r");
    if(fp==NULL) {
        printf("文件不存在,程序终止\n");
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

