/**
 * 文件名：doubly_node.h
 * 作者：NboWan
 * 日期：2026-1-9
 * 描述：双向链表库头文件
 * 编码格式:utf8
 */

#ifndef DOUBLY_NODE_H
#define DOUBLY_NODE_H

#include "common.h"

typedef struct doubly_node_t
{
    elemType data;
    doubly_node_t *prev;
    doubly_node_t *next;
} doubly_node_t;

typedef struct
{
    doubly_node_t *head;
    doubly_node_t *tail;
    int size;
} doubly_linked_list_t;

/*********************************************************函数声明********************************************************/

doubly_linked_list_t *initDoublyNode(void);
bool isDoublyNodeEmpty(doubly_linked_list_t *DL);
void destroyDoublyNode(doubly_linked_list_t *DL);

/**
 * 增
 */
bool insertDoubleHead(doubly_linked_list_t *DL, elemType e);
bool insertDoubleTail(doubly_linked_list_t *DL, elemType e);
bool insertDoublyNodeWithPos(doubly_linked_list_t *DL, int pos, elemType e);

/**
 * 删
 */
bool deleteDoubleHead(doubly_linked_list_t *DL, elemType *e);
bool deleteDoubleTail(doubly_linked_list_t *DL, elemType *e);
bool deleteDoublyWithPos(doubly_linked_list_t *DL, int pos, elemType *e);

/**
 * 改
 */
bool reverseDoublyLinkedList(doubly_linked_list_t *DL);
bool updateDoublyNode(doubly_linked_list_t *DL, int pos, elemType e);

/**
 * 查
 */
int findDoublyNode(doubly_linked_list_t *DL, elemType e);
int readDoublyNodeLen(doubly_linked_list_t *DL);
bool readDoublyNodeListForward(doubly_linked_list_t *DL);
bool readDoublyNodeListBackward(doubly_linked_list_t *DL);
bool readDoublyNodeWithPos(doubly_linked_list_t *DL, int pos, elemType *e);

/*************************************************************************************************************************/
#endif
