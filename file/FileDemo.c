//
// Created by 风落叶 on 2020/6/15.
//

#include "FileDemo.h"

static char *path = "./test.txt";

FILE *createFile() {
    FILE *fp;
    fp = fopen(path, "w+");
    return fp;
}


void write() {
    FILE *fp = createFile();
    if (fp == NULL) {
        printf("文件创建失败\n");
        return;
    }
    printf("文件创建成功\n");
    fprintf(fp, "This is testing for fprintf...\n");
    //如果写入成功，它会返回一个非负值，如果发生错误，则会返回 EOF。
    int ret = fputs("This is testing for fputs...\n", fp);
    if (ret == EOF) {
        printf("写入失败");
    } else{
        printf("写入成功");
    }
    close(fp);
}

void read() {
    FILE *file = createFile();
    while (1) {
        if (feof(file)) {
            break;
        }

    }
}

void close(FILE *file) {
    fclose(file);
}

