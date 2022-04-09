#include "student.h"
void dele_save(List *plist)
{
    FILE* fp;
    Node* p = plist->head;
    if((fp=fopen("student","w+"))==NULL) {
        printf("打开文件失败！\n");
    }
    if( p ) {
        while ( p->next ) {
            fwrite(p,sizeof (Node),1,fp);
            p = p->next;
        }
        printf("保存成功!\n");
    } else{
        printf("请先录入信息再进行保存！\n");
    }
    fclose(fp);
    system("pause");
}
