#include "student.h"

void stu_save(List *plist)//����ѧ����Ϣ���ļ�
{
    FILE* fp;
    Node* p = plist->head;
    if((fp=fopen("student","w+"))==NULL) {
        printf("���ļ�ʧ�ܣ�\n");
    }
    if( p ) {
        while ( p ) {
            fwrite(p,sizeof (Node),1,fp);
            p = p->next;
        }
        printf("����ɹ�!\n\n");
    } else{
        printf("����¼����Ϣ�ٽ��б��棡\n");
    }
    fclose(fp);
    system("pause");
    system("cls");
}

