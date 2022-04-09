#include "student.h"

void qusort(Node* head, Node* tail)
{
    Node* lock, * move, * pivot;
    lock = head;
    move = head;//向后移动的指针
    pivot = head;//基准
    while (1) {
        if (move->data.num < pivot->data.num) {
            lock = lock->next;
            swap(lock, move);
        }
        if (move != tail) {
            move = move->next;
        }
        else {
            break;
        }
    }
    swap(lock, head);
    if (head != lock) {
        qusort(head, lock);
    }
    if (lock != tail) {
        qusort(lock->next, tail);
    }
}

