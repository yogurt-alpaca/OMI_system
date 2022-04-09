cmake_minimum_required(VERSION 3.21)
project(OMI_student_system C)

set(CMAKE_C_STANDARD 99)

add_executable(OMI_student_system main.c student.h menu.c help.c stu_add.c tail_find.c swap.c qusort.c stu_sort.c stu_search_num.c stu_search_nam.c stu_search.c stu_delete_num.c stu_delete_nam.c stu_delete.c stu_change.c stu_save.c stu_skim.c stu_read.c dele_save.c judge_date.c addStu.c stu_clear.c)
