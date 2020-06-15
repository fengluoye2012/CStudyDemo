//
// Created by 风落叶 on 2020/6/15.
//

#ifndef CSTUDYDEMO_THREADDEMO_H
#define CSTUDYDEMO_THREADDEMO_H

void statThread();

void statThreadParam();

void statThreadStructParam();

/**
 * 相当于runnable,
 * @param arg  void类型指针
 * @return void类型
 */
void *thread_func(void *arg);

/**
 * 带参数的
 * @param arg
 * @return
 */
void *thread_func_param(void *arg);

/**
 * 结构体参数
 * @param arg
 * @return
 */
void *thread_func_struct_param(void *arg);

#endif //CSTUDYDEMO_THREADDEMO_H
