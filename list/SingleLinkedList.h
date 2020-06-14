//
// Created by 风落叶 on 2020/6/12.
//

#ifndef _SINGLELINKEDLIST_H
#define _SINGLELINKEDLIST_H

#include "Node.h"

static struct Node *headerNode;

/**
 * 添加一个节点
 * @param node
 */
void add(struct Node *node);

//添加头节点
void addHeader(struct Node *node);

//在指定index下标后添加节点
void addByIndex(int index, struct Node *nextNode);

/**
 * 获最后一个节点
 * @return 可能为null
 */
struct Node *get();

//获取头节点
struct Node *getHeader();

//获取指定index的节点
struct Node *getByIndex(int index);

/**
 * 删除最后一个节点
 * @return
 */
struct Node *removeNode();

struct Node *removeByIndex(int index);

/**
 * 单链表的长度
 * @return
 */
int size();

/**
 * 根据Node 反转单链表
 */
struct Node *invert(struct Node *node);


void printfNodes(struct Node *node);

#endif
