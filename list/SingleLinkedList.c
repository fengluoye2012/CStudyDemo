//
// Created by 风落叶 on 2020/6/12.
//
//节点结构体
#include <stdio.h>
#include "SingleLinkedList.h"
#include "Node.h"
#include <stdlib.h>

void add(struct Node *node) {
    if (headerNode == NULL) {
        headerNode = node;
        return;
    }
    struct Node *tem = headerNode;
    //直接找到最后一个节点
    while (tem != NULL && tem->next != NULL) {
        tem = tem->next;
    }
    tem->next = node;
}

void addHeader(struct Node *node) {
    struct Node *tem = headerNode;
    headerNode = node;
    if (headerNode != NULL) {
        headerNode->next = tem;
    }
}

void addByIndex(int index, struct Node *nextNode) {

}

struct Node *get() {
    struct Node *tem = headerNode;
    //找到最后一个节点
    while (tem != NULL && tem->next != NULL) {
        tem = tem->next;
    }
    return tem;
}

struct Node *getHeader() {
    return headerNode;
}

struct Node *getByIndex(int index) {
    return NULL;
}

struct Node *removeNode() {
    if (headerNode == NULL) {
        return NULL;
    }

    if (headerNode->next == NULL) {
        struct Node *target = (struct Node *) malloc(sizeof(struct Node));
        (*target).value = headerNode->value;
        (*target).next = NULL;
        headerNode = NULL;
        return target;
    }

    struct Node *tem = headerNode;
    struct Node *pre = NULL;
    //找到最后一个节点
    while (tem != NULL && tem->next != NULL) {
        pre = tem;
        tem = tem->next;
    }
    //倒数第二个节点
    pre->next = NULL;
    printf("remove value=%s", tem->value);
    return tem;
}

struct Node *removeByIndex(int index) {
    return NULL;
}

int size() {
    int size = 0;
    struct Node *tem = headerNode;
    while (tem != NULL) {
        size++;
        tem = tem->next;
    }
    return size;
}

//反转
struct Node *invert(struct Node *node) {
    struct Node *pre = NULL;
    struct Node *next = NULL;
    while (node != NULL) {
        next = node->next;
        node->next = pre;
        pre = node;
        node = next;
    }
    headerNode = pre;
    //node = 1  1->2->3->4
    //next = 2 2->3->4   pre=1  node=2;   一轮
    //next=3 3-4  pre=2  2->1 node=3
    //next=4  pre=3 3->2->1 node=4
    //next=null pre=4 4->3->2->1 node =null
    return pre;
}

void printfNodes(struct Node *node) {
    struct Node *tem = node;
    while (tem != NULL) {
        printf("printfNodes=%s\n", tem->value);
        tem = tem->next;
    }
}



