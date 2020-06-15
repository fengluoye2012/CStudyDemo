//
// Created by 风落叶 on 2020/6/15.
//

#ifndef CSTUDYDEMO_FILEDEMO_H
#define CSTUDYDEMO_FILEDEMO_H

#include <stdio.h>

static char *path;

/**
 * 根据路径创建文件是
 * @param path
 * @return
 */
FILE *createFile();

void read();

void write();

void close(FILE *file);

#endif //CSTUDYDEMO_FILEDEMO_H
