#define _CRT_SECURE_NO_WARNINGS
#ifndef OMI_STUDENT_SYSTEM_STUDENT_H
#define OMI_STUDENT_SYSTEM_STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
typedef struct _born {
    int year;
    int month;
    int day;
}Born;
typedef struct _student {
    long long  num;
    char name[20];
    int age;
    int sex;
    Born birst;
    char address[20];
    long long tele;
    char email[30];
}stu;           //ѧ����Ϣdata
typedef struct _node {
    stu data;
    struct _node* next;
}Node;
typedef struct _list {
    Node* head;
    Node* tail;
}List;         //�����head��tail

//function state
void menu();//�˵�����
void help();//��������
//¼��ѧ����Ϣ����
void stu_add(List* plist);
Node* tail_find(Node* head);//�ҵ������β��
void swap(Node* a, Node* b);//�����ṹ��
//����
void qusort(Node* head, Node* tail);//��������
void stu_sort(List* plist);
//��ѯѧ����Ϣ
void stu_search(List* plist);
Node * stu_search_num(List* plist);//����ѧ�Ų���
Node* stu_search_nam(List* plist);//������������
//ɾ��ѧ����Ϣ
void stu_delete(List* plist);
void stu_delete_num(List* plist);//����ѧ��ɾ����Ϣ
void stu_delete_nam(List* plist);//��������ɾ����Ϣ
//����ѧ����Ϣ
int stu_change(List* plist);
//����ѧ����Ϣ
void stu_save(List *plist);
//����ɾ���������
void dele_save(List *plist);
//���ȫ����¼��ѧ����Ϣ
void stu_skim(List* plist);
//����ǰ��ȡ�ļ�����
void stu_read(List *plist);
//�жϳ������ڵĺϷ���
int leap(int year);
int judge(int year, int month, int day);
//����ѧ����Ϣ
void addStu(List* plist);
//���ѧ����Ϣ
void stu_clear();
#endif //OMI_STUDENT_SYSTEM_STUDENT_H
