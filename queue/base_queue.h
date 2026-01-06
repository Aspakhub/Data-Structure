/**
 * 文件名: base_queue.c
 * 作者: NboWan
 * 日期: 2026-1-5
 * 描述: 循环数组队列库函数头文件
 * 编码格式:utf-8
 */

#ifndef BASE_QUEUE_H
#define BASE_QUEUE_H

#define MAX_SIZE 100

#include "node.h"

typedef struct
{
    elemType data[MAX_SIZE];
    elemType rear;
    elemType front;
    int size;
} queue_t;

/*******************************************************函数声明**********************************************************/

queue_t *initQueue();
bool isQueueEmpty(queue_t *q);
bool isQueueFull(queue_t *q);
void enQueue(queue_t *q, elemType e);
bool deQueue(queue_t *q, elemType *e);
bool peekQueue(queue_t *q, elemType *e);
int readQueueLen(queue_t *q);
bool clearQueue(queue_t *q);
void destroyQueue(queue_t **q);

/*************************************************************************************************************************/

#endif
