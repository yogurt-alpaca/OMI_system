#include "student.h"
void dele_save(List *plist)
{
    FILE* fp;
    Node* p = plist->head;
    if((fp=fopen("student","w+"))==NULL) {
        printf("���ļ�ʧ�ܣ�\n");
    }
    if( p ) {
        while ( p->next ) {
            fwrite(p,sizeof (Node),1,fp);
            p = p->next;
        }
        printf("����ɹ�!\n");
    } else{
        printf("����¼����Ϣ�ٽ��б��棡\n");
    }
    fclose(fp);
    system("pause");
}
