/**
 * 文件名：node.h
 * 作者：NboWan
 * 日期：2025-12-30
 * 描述：链表库，提供了增删改查等常见操作
 * 编码格式:gbk
 */

#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int elemType;

/**
 * 这是一个定义链表的结构体
 */
typedef struct node_t
{
    elemType data;
    struct node_t *next;
} node_t;

/*******************************************************函数声明**********************************************************/


bool isNodeEmpty(node_t *L);
node_t *initNode();
node_t *insertHead(node_t *L, elemType e);
node_t *getTail(node_t *L);
node_t *insertTail(node_t *L, elemType e);
node_t *destroyList(node_t *L);
void readNodeList(node_t *L);
int readNodeLen(node_t *L);
node_t *insertNodeWithPos(node_t *L, elemType e, int pos);
bool deleteNodeWithPos(node_t *L, int pos);
bool updateNode(node_t *L, elemType e, int pos);


/*************************************************************************************************************************/

#endif
