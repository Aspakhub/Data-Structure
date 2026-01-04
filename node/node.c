/**
 * ÎÄ¼şÃû: node.c
 * ×÷Õß: NboWan
 * ÈÕÆÚ: 2025-12-31
 * ÃèÊö: Á´±í¿âº¯ÊıÔ´ÎÄ¼ş
 * ±àÂë¸ñÊ½:gbk
 */

#include "node.h"

/*******************************************************º¯Êı¶¨Òå**********************************************************/

/**
 * ÅĞ¶ÏÁ´±íÊÇ·ñÎª¿Õ£»
 * ·µ»ØboolÖµ
 */
bool isNodeEmpty(node_t *L)
{
    return (L->next == NULL);
}

/**
 * ³õÊ¼»¯Í·½Úµã£»
 * ·µ»ØÖµÊÇÍ·½ÚµãµÄµØÖ·
 */
node_t *initNode()
{
    node_t *L = (node_t *)malloc(sizeof(node_t));
    L->data = 0;
    L->next = NULL;
    return L;
}

/**
 * Í·²å·¨
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
 * »ñÈ¡Á´±íÎ²µØÖ·£»
 * ·µ»ØÖµÎªÎ²µØÖ·
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
 * Î²²å·¨
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
 * Çå¿ÕÁ´±í£»
 * ×¢Òâ£¬Í·½ÚµãÒ²»á±»Çå³ı£»
 */
node_t *destroyList(node_t *L)
{
    if (L == NULL)
    {
        printf("Á´±íÒÑÎª¿Õ\n");
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

    printf("Ïú»ÙÁ´±íÍê³É£¬¹²Ïú»Ù%d¸ö½Úµã\n", node_t_count);
    return NULL; // ·µ»ØNULL¹©Íâ²¿Ê¹ÓÃ
}

/**
 * ±éÀúÁ´±í
 */
void readNodeList(node_t *L)
{
    if (isNodeEmpty(L))
    {
        printf("Á´±íÎª¿Õ\n");
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
 * »ñÈ¡Á´±í³¤¶È£»
 * Á´±í³¤¶È²»°üº¬Í·½Úµã£»
 * Êı¾İ´æ´¢ÔÚL->dataÖĞ
 */
int readNodeLen(node_t *L)
{
    return L->data;
}

/**
 * °´Î»ÖÃ²åÈë½Úµã£»
 * Í·½ÚµãposÎª0
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
 * °´Î»ÖÃÉ¾³ı½Úµã
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
 * °´Î»ÖÃ¸üĞÂ½Úµã
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