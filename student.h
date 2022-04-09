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
}stu;           //学生信息data
typedef struct _node {
    stu data;
    struct _node* next;
}Node;
typedef struct _list {
    Node* head;
    Node* tail;
}List;         //链表的head、tail

//function state
void menu();//菜单界面
void help();//帮助界面
//录入学生信息函数
void stu_add(List* plist);
Node* tail_find(Node* head);//找到链表的尾部
void swap(Node* a, Node* b);//交换结构体
//排序
void qusort(Node* head, Node* tail);//快速排序
void stu_sort(List* plist);
//查询学生信息
void stu_search(List* plist);
Node * stu_search_num(List* plist);//按照学号查找
Node* stu_search_nam(List* plist);//按照姓名查找
//删除学生信息
void stu_delete(List* plist);
void stu_delete_num(List* plist);//按照学号删除信息
void stu_delete_nam(List* plist);//按照姓名删除信息
//更改学生信息
int stu_change(List* plist);
//保存学生信息
void stu_save(List *plist);
//保存删除后的数据
void dele_save(List *plist);
//输出全部已录入学生信息
void stu_skim(List* plist);
//运行前读取文件内容
void stu_read(List *plist);
//判断出生日期的合法性
int leap(int year);
int judge(int year, int month, int day);
//增添学生信息
void addStu(List* plist);
//清空学生信息
void stu_clear();
#endif //OMI_STUDENT_SYSTEM_STUDENT_H
