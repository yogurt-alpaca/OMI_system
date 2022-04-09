#include "student.h"

void stu_sort(List* plist)
{
    if (plist->head->next == NULL) {
        printf("\n未录入任何学生信息，请先录入再进行排序！\n\n");
        system("pause");
        return -1;
    }
    Node* newTail;
    newTail = tail_find(plist->head);
    qusort(plist->head, newTail);
    printf("排序完毕！\n");
    dele_save(plist);
    system("pause");
}
