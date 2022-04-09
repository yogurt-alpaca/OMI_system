#include "student.h"

Node* tail_find(Node* head)
{
    //由于read出来的文件数据最后一个结构体为"EOF",故tail应该是倒数第二个节点
    //故重新定义了 pNext用来指向p的next的next
    Node* p;
    p = head;
    Node* pNext;
    pNext = p->next;
    while (pNext->next) {
        p = p->next;
        pNext = pNext->next;
    }
    return p;
}