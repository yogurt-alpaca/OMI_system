#include "student.h"

void stu_clear()
{
    FILE *fp;
    fp = fopen("student","w");
    char blank = ' ';
    char* p = &blank;
    fwrite(&blank,sizeof (Node),1,fp);
    printf("\n数据已全部清除！\n\n");
    system("pause");
}

