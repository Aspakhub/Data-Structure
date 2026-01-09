/**
 * 文件名: node.c
 * 作者: NboWan
 * 日期: 2025-12-31
 * 描述: 链表库函数源文件
 * 编码格式:utf8
 */

#include "node.h"

/*******************************************************函数定义**********************************************************/

/**
 * 判断链表是否为空；
 * 返回bool值
 */
bool isNodeEmpty(node_t *L)
{
    return (L->next == NULL);
}

/**
 * 初始化头节点；
 * 返回值是头节点的地址
 */
node_t *initNode()
{
    node_t *L = (node_t *)malloc(sizeof(node_t));
    L->data = 0;
    L->next = NULL;
    return L;
}

/**
 * 头插法
 */
node_t *insertHead(node_t *L, elemType e)
{
    node_t *p = (node_t *)malloc(sizeof(node_t));
    p->data = e;
    p->next = L->next;
    L->next = p;
    L->data++;
    return p;
}

/**
 * 获取链表尾地址；
 * 返回值为尾地址
 */
node_t *getTail(node_t *L)
{
    if (L == NULL)
        return NULL;
    node_t *p = L;
    while (p->next != NULL)
    {
        p = p->next;
    }
    return p;
}

/**
 * 尾插法
 */
node_t *insertTail(node_t *L, elemType e)
{
    node_t *tail = getTail(L);
    node_t *new_node_t = (node_t *)malloc(sizeof(node_t));
    new_node_t->data = e;
    new_node_t->next = NULL;
    tail->next = new_node_t;
    L->data++;
    return new_node_t;
}

/**
 * 清空链表；
 * 注意，头节点也会被清除；
 */
node_t *destroyList(node_t *L)
{
    if (L == NULL)
    {
        printf("链表已为空\n");
        return NULL;
    }

    node_t *current = L;
    int node_t_count = 0;

    while (current != NULL)
    {
        node_t *temp = current;
        current = current->next;
        free(temp);
        node_t_count++;
    }

    printf("销毁链表完成，共销毁%d个节点\n", node_t_count);
    return NULL; // 返回NULL供外部使用
}

/**
 * 遍历链表
 */
void readNodeList(node_t *L)
{
    if (isNodeEmpty(L))
    {
        printf("链表为空\n");
        return;
    }
    node_t *p = L->next;
    while (p != NULL)
    {
        printf("%d \n", p->data);
        p = p->next;
    }
}

/**
 * 获取链表长度；
 * 链表长度不包含头节点；
 * 数据存储在L->data中
 */
int readNodeLen(node_t *L)
{
    return L->data;
}

/**
 * 按位置插入节点；
 * 头节点pos为0
 */
node_t *insertNodeWithPos(node_t *L, elemType e, int pos)
{
    if (L->data + 1 < pos || pos < 1)
        return NULL;
    node_t *p = L;
    for (int i = 1; i < pos; i++)
    {
        p = p->next;
    }
    node_t *node_t_to_insert = (node_t *)malloc(sizeof(node_t));
    node_t_to_insert->data = e;
    node_t_to_insert->next = p->next;
    p->next = node_t_to_insert;
    L->data++;
    return node_t_to_insert;
}

/**
 * 按位置删除节点
 */
bool deleteNodeWithPos(node_t *L, int pos)
{
    if (L->data < pos || pos < 1)
        return false;
    node_t *p = L;
    for (int i = 1; i < pos; i++)
    {
        p = p->next;
    }
    node_t *node_t_to_delate = p->next;
    p->next = node_t_to_delate->next;
    free(node_t_to_delate);
    L->data--;
    return true;
}

/**
 * 按位置更新节点
 */
bool updateNode(node_t *L, elemType e, int pos)
{
    if (L->data < pos || pos < 1)
        return false;
    node_t *p = L;
    for (int i = 0; i < pos; i++)
    {
        p = p->next;
    }
    p->data = e;
    return true;
}

/*************************************************************************************************************************/