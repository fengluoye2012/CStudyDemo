cmake_minimum_required(VERSION 3.16)
project(CStudyDemo C)

set(CMAKE_C_STANDARD 99)

add_executable(CStudyDemo main.c list/SingleLinkedList.h list/SingleLinkedList.c list/Node.c list/Node.h)