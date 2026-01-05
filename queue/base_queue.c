/**
 * 文件名: base_queue.c
 * 作者: NboWan
 * 日期: 2026-1-5
 * 描述: 循环数组队列库函数源文件
 * 编码格式:gbk
 */



#include "base_queue.h"


/*******************************************************函数定义**********************************************************/


/**
 * 初始化数组队列
 */
queue_t *initQueue()
{
    queue_t *q = (queue_t *)malloc(sizeof(queue_t));
    if(!q)
    {
        printf("内存已满,分配失败!!! \n");
        return NULL;
    }

    q->front = 0;
    q->rear = 0;
    q->size = 0;
    return q;
}

/**
 * 判断队列是否为空
 */
bool isQueueEmpty(queue_t *q)
{
    return q == NULL || q->size == 0;
}

/**
 * 判断队列是否已满或是否发生覆盖
 */
bool isQueueFull(queue_t *q)
{
    return q && q->size == MAX_SIZE;
}

/**
 * 入队
 */
void enQueue(queue_t *q, elemType e)
{
    if(!q) 
    {
        return;
    }

    q->data[q->rear] = e;
    q->rear = (q->rear+1) % MAX_SIZE;
    if(q->size < MAX_SIZE)
    {
        q->size++;
    }
    else
    {
        q->front = (q->front + 1) % MAX_SIZE;
    }
}

/**
 * 出队
 */
bool deQueue(queue_t *q, elemType *e)
{
    if (!q || !e || q->size == 0)
    {
        printf("队列为空,出队失败!!! ");
        return false;
    }

    *e = q->data[q->front];
    q->front = (q->front + 1) % MAX_SIZE; 
    q->size--;

    return true;
}

/**
 * 查看队头元素
 */
bool peekQueue(queue_t *q, elemType *e)
{
    if (!q || !e || q->size == 0)
    {
        printf("peek失败!!! ");
        return false;
    }

    *e = q->data[q->front];
    return true;
}

/**
 * 获取队列长度
 */
int readQueueLen(queue_t *q)
{
    if (!q)
    {
        printf("空指针, read失败!!! ");
        return 0;
    }

    return q->size;
}

/**
 * 清空队列
 */
bool clearQueue(queue_t *q)
{
    if(!q)
    {
        return false;
    }

    q->front = 0;
    q->rear = 0;
    q->size = 0;
    return true;
}

/**
 * 销毁队列
 */
void destroyQueue(queue_t **q)
{
    free(*q);
    q = NULL;
}


/*************************************************************************************************************************/
