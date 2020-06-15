//
// Created by 风落叶 on 2020/6/15.
//

#include "ThreadDemo.h"
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include "../list/Node.h"
#include <stdlib.h>

//将 struct Node * 定义别名
typedef struct Node *NodePoint;

void statThread() {
    pthread_t threadId;
    int count = 10;
    //参数1、线程变量名，被创建线程的标识
    //2. 线程的属性指针，缺省为NULL即可
    //3. 被创建线程的程序代码:为void* 返回值指针
    // 4. 程序代码的参数
    int ret_thread = pthread_create(&threadId, NULL, thread_func, NULL);
    //创建线程成功时，函数返回 0，若返回值不为 0 则说明创建线程失败。
    if (ret_thread == 0) {
        printf("线程创建成功\n");
    } else {
        printf("线程创建失败\n");
    }
}

void *thread_func(void *arg) {
    int i = 0;
    for (i; i < 10; i++) {
        printf("thread_func ==  %d\n", i);
    }
    return 0;
}

void statThreadParam() {
    pthread_t threadId;
    int end = 6;
    int ret_thread = pthread_create(&threadId, NULL, thread_func_param, (void *) &end);
    if (ret_thread == 0) {
        printf("线程创建成功\n");
    } else {
        printf("线程创建失败\n");
    }
}

void *thread_func_param(void *arg) {
    int *end = (int *) arg;
    printf("end = %d\n", *end);
    for (int i = 0; i < *end; i = i + 1) {
        printf("thread_func_param == %d\n", i);
        sleep(i);//单位为秒
    }
    return 0;
}

void statThreadStructParam() {
    pthread_t threadId;
    NodePoint nodePoint = (NodePoint) malloc(sizeof(NodePoint));
    nodePoint->value = "风落叶";
    (*nodePoint).next = NULL;
    int ret_thread = pthread_create(&threadId, NULL, thread_func_struct_param, (void *) nodePoint);
    if (ret_thread == 0) {
        printf("线程创建成功\n");
    } else {
        printf("线程创建失败\n");
    }
}

void *thread_func_struct_param(void *arg) {
    NodePoint node = (NodePoint) arg;
    printf("当前节点的value=%s\n", node->value);
    printf("当前节点的value=%s\n", (*node).value);
    return NULL;
}
