/**
 * 文件名: linked_stack.c
 * 作者: NboWan
 * 日期: 2026-1-3
 * 描述: 链表栈库函数源文件
 * 编码格式:gbk
 */

#include "linked_stack.h"
/******************************************************函数定义***********************************************************/

/**
 * 初始化栈
 */
linked_stack_t *initLinkedStack()
{
    linked_stack_t *s = (linked_stack_t *)malloc(sizeof(linked_stack_t));
    if (s == NULL)
    {
        printf("内存已满,创建失败!!! \n");
        return NULL;
    }
    s->top = NULL;
    s->size = 0;
    return s;
}

/**
 * 判断栈是否为空
 */
bool isLinkedStackEmpty(linked_stack_t *s)
{
    if (s == NULL)
        return true;
    return s->size == 0;
}

/**
 * 压栈操作
 */
bool linkedStackPush(linked_stack_t *s, elemType e)
{
    node_t *new_stack_node = (node_t *)malloc(sizeof(node_t));

    if (new_stack_node == NULL)
    {
        printf("内存已满,创建失败!!! \n");
        return false;
    }

    new_stack_node->data = e;
    new_stack_node->next = s->top;
    s->top = new_stack_node;
    s->size++;
    return true;
}

/**
 * 出栈操作
 */
bool linkedStackPop(linked_stack_t *s, elemType *e)
{
    if (isLinkedStackEmpty(s))
    {
        printf("栈空,出栈失败!!! \n");
        return false;
    }

    node_t *stack_node_to_delete = s->top;
    *e = stack_node_to_delete->data;
    s->top = stack_node_to_delete->next;
    free(stack_node_to_delete);
    s->size--;
    return true;
}

/**
 * 读取栈顶元素大小
 */
bool linkedStackPeek(linked_stack_t *s, elemType *e)
{
    if (s->top == NULL)
        return false;

    *e = s->top->data;
    return true;
}

/**
 * 获取栈的长度
 */
int getLinkedStackLen(linked_stack_t *s)
{
    return s->size;
}

/**
 * 遍历栈
 */
void readLinkedStackList(linked_stack_t *s)
{
    node_t *temp = s->top;

    if (isLinkedStackEmpty(s))
    {
        printf("空栈,遍历失败!!! \n");
        return;
    }

    printf("从栈顶到栈底,元素依次是: \n");
    while (temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}

/**
 * 清除栈中元素
 */
void clearLinkedStack(linked_stack_t *s)
{
    elemType temp;
    if (isLinkedStackEmpty(s))
        return;
    while (s->top != NULL)
    {
        linkedStackPop(s, &temp);
    }
    s->top = NULL;
    s->size = 0;
}

/**
 * 销毁栈
 */
void destroyLinkedStack(linked_stack_t **s)
{
    clearLinkedStack(*s);
    free(*s);
    *s = NULL;
}

/*************************************************************************************************************************/
