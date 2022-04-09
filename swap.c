#include "student.h"

void swap(Node* a, Node* b)
{
    stu temp;
    temp = a->data;
    a->data = b->data;
    b->data = temp;
}
