//
// Created by 风落叶 on 2020/6/15.
//

#include "ThreadDemo.h"
#include <pthread.h>
#include <stdio.h>

/**
 * 相当于runnable,
 * @param arg  void类型指针
 * @return void类型
 */
void *thread_func(void *arg);

void statThread() {
    pthread_t threadId;
    int count = 10;
    //参数1、线程变量名，被创建线程的标识
    //2. 线程的属性指针，缺省为NULL即可
    // 3. 被创建线程的程序代码
    // 4. 程序代码的参数
    int ret_thread = pthread_create(&threadId, NULL, (void *) &thread_func, (void *) NULL);
    //线程创建成功，返回0,失败返回失败号
    if (ret_thread != 0) {
        printf("线程创建成功");
    } else {
        printf("线程创建失败");
    }
}

void *thread_func(void *arg) {
//    int *count = (int *) arg;
    int count = 10;
    int i = 0;
    for (i; i < count; i++) {
        printf("count == %d", i);
    }
    pthread_exit(NULL);
}
