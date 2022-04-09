#include "student.h"

void stu_save(List *plist)//保存学生信息到文件
{
    FILE* fp;
    Node* p = plist->head;
    if((fp=fopen("student","w+"))==NULL) {
        printf("打开文件失败！\n");
    }
    if( p ) {
        while ( p ) {
            fwrite(p,sizeof (Node),1,fp);
            p = p->next;
        }
        printf("保存成功!\n\n");
    } else{
        printf("请先录入信息再进行保存！\n");
    }
    fclose(fp);
    system("pause");
    system("cls");
}

