#include "student.h"

Node* tail_find(Node* head)
{
    //����read�������ļ��������һ���ṹ��Ϊ"EOF",��tailӦ���ǵ����ڶ����ڵ�
    //�����¶����� pNext����ָ��p��next��next
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