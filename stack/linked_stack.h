/**
 * 文件名：linked_stack_t_h
 * 作者：NboWan
 * 日期：2025-12-31
 * 描述：基于链表的栈函数实现
 * 补充：结构设计不合理，该版本已作废
 */

// #ifndef LINKED_STACK_H
// #define LINKED_STACK_H

// #include "node.h"

// /**
//  * 这是一个基于链表的栈结构体实现
//  */
// typedef struct LinkedStack
// {
//     elemType data;
//     struct LinkedStack *next;
// } LinkedStack;

// LinkedStack* initLinkedStack();
// bool isLinkedStackEmpty(LinkedStack *s);
// LinkedStack* pushLinkedStack(LinkedStack *s, elemType e);
// elemType popLinkedStack(LinkedStack *s);
// elemType readTopLinkedStack(LinkedStack *s);
// int readLinkedStackLen(LinkedStack *s);
// void readLinkedStackList(LinkedStack *s);
// void destroyLinkedStack(LinkedStack *s);

// LinkedStack *initLinkedStack()
// {
//     LinkedStack *s = (LinkedStack *)malloc(sizeof(LinkedStack));
//     s->data = 0;
//     s->next = NULL;
//     return s;
// }

// bool isLinkedStackEmpty(LinkedStack *s)
// {
//     return s->data == 0;
// }

// LinkedStack* pushLinkedStack(LinkedStack *s, elemType e)
// {
//     LinkedStack *p = s;
//     while(p->next != NULL)
//     {
//         p = p->next;
//     }
//     LinkedStack *new_linked_stack_t = (LinkedStack *)malloc(sizeof(LinkedStack));
//     p->next = new_linked_stack_t;
//     new_linked_stack_t->next = NULL;
//     new_linked_stack_t->data = e;
//     s->data++;
//     return new_linked_stack_t;
// }

// elemType popLinkedStack(LinkedStack *s)
// {
//     LinkedStack *p = s;
//     for (int i = 1; i < s->data; i++)
//     {
//         p = p->next;
//     }
//     LinkedStack *linked_stack_t_to_delete = p->next;
//     free(linked_stack_t_to_delete);
//     p->next = NULL;
//     s->data--;
//     return p->data;
// }
// elemType readTopLinkedStack(LinkedStack *s)
// {
//     LinkedStack *p = s;
//     while(s != NULL) p = p->next;
//     return p->data;
// }
// void readLinkedStackList(LinkedStack *s)
// {
//     LinkedStack *p;
//     while(p != NULL)
//     {
//         p = p->next;
//         printf("%d \n", p->data);
//     }
// }

// void destroyLinkedStack(LinkedStack *s)
// {
//     for (int i = 0; i < s->data;i++)
//     {
//         LinkedStack *linked_stack_t_to_delete = s;
//         free(linked_stack_t_to_delete);
//         if(s->next != NULL)  s = s->next;
//     }
// }

// #endif
