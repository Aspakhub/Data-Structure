/**
 * 文件名：base_stack.h
 * 作者:NboWan
 * 日期:2025-12-31
 * 描述:栈的简单实现
 * 编码格式:gbutf-8
 */

#ifndef STACK_H
#define STACK_H

#include "node.h"
#define MAX_SIZE 100

/**
 * 这是一个栈的基本定义
 */
typedef struct
{
    elemType data[MAX_SIZE];
    int top;
} stack_t;

/******************************************************函数声明***********************************************************/

void initStack(stack_t *s);
bool isStackEmpty(stack_t *s);
bool isStackFull(stack_t *s);
bool pushStack(stack_t *s, elemType e);
bool popStack(stack_t *s, elemType *e);
elemType readTopStack(stack_t *s);
void readStacklist(stack_t *s);
void clearStack(stack_t *s);

/*************************************************************************************************************************/

#endif
