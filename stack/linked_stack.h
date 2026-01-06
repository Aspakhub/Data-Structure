/**
 * 文件名:linked_stack.h
 * 作者:NboWan
 * 日期:2025-12-31
 * 描述:修改过的基于链表的栈函数库
 * 编码格式:gbutf-8
 */

#ifndef CURRECT_LINKED_STACK_H
#define CURRECT_LINKED_STACK_H

#include "node.h"

/**
 * 这是一个管理栈的结构体
 */
typedef struct
{
    node_t *top; // 栈顶指针
    int size;    // 栈大小
} linked_stack_t;

/******************************************************函数声明***********************************************************/

linked_stack_t *initLinkedStack();
bool isLinkedStackEmpty(linked_stack_t *s);
bool linkedStackPush(linked_stack_t *s, elemType e);
bool linkedStackPop(linked_stack_t *s, elemType *e);
bool linkedStackPeek(linked_stack_t *s, elemType *e);
int getLinkedStackLen(linked_stack_t *s);
void readLinkedStackList(linked_stack_t *s);
void clearLinkedStack(linked_stack_t *s);
void destroyLinkedStack(linked_stack_t **s);

/*************************************************************************************************************************/

#endif
