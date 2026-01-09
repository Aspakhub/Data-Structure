/**
 * 文件名：binary_tree.h
 * 作者:NboWan
 * 日期:2026-1-9
 * 描述:二叉树头文件
 * 编码格式:utf8
 */

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "node.h"
#include "common.h"

typedef struct bitree_t
{
    elemType data;
    bitree_t *left;
    bitree_t *right;
} bitree_t;

#endif
