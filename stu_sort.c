#include "student.h"

void stu_sort(List* plist)
{
    if (plist->head->next == NULL) {
        printf("\nδ¼���κ�ѧ����Ϣ������¼���ٽ�������\n\n");
        system("pause");
        return -1;
    }
    Node* newTail;
    newTail = tail_find(plist->head);
    qusort(plist->head, newTail);
    printf("������ϣ�\n");
    dele_save(plist);
    system("pause");
}
