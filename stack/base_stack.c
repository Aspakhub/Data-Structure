/**
 * 文件名: base_stack.c
 * 作者: NboWan
 * 日期: 2026-1-2
 * 描述: 数组栈库函数源文件
 * 编码格式:utf-8
 */

#include "base_stack.h"

/*******************************************************函数定义**********************************************************/

/**
 * 栈的初始化
 */
void initStack(stack_t *s)
{
    s->top = 0;
}

/**
 * 判断栈是否为空
 */
bool isStackEmpty(stack_t *s)
{
    return s->top == 0;
}

/**
 * 判断栈是否已满
 */
bool isStackFull(stack_t *s)
{
    return s->top >= MAX_SIZE;
}

/**
 * 压栈函数
 */
bool pushStack(stack_t *s, elemType e)
{
    if (isStackFull(s))
    {
        printf("栈已满");
        return false;
    }
    s->data[s->top] = e;
    s->top++;
    return true;
}

/**
 * 移除栈顶；
 * e是存放被移除栈顶数据的缓冲区指针
 */
bool popStack(stack_t *s, elemType *e)
{
    if (isStackEmpty(s))
    {
        printf("栈为空,无效删除 \n");
        return false;
    }
    s->top--;
    *e = s->data[s->top];
    return true;
}

/**
 * 获取栈顶值
 */
elemType readTopStack(stack_t *s)
{
    if (isStackEmpty(s))
    {
        printf("栈为空,无效读取");
        return 0;
    }
    return s->data[s->top - 1];
}

/**
 * 遍历栈
 */
void readStacklist(stack_t *s)
{
    for (int i = 0; i < s->top; i++)
    {
        printf("%d \n", s->data[i]);
    }
}

/**
 * 清除栈
 */
void clearStack(stack_t *s)
{
    s->top = 0;
}

/*************************************************************************************************************************/