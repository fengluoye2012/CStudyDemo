#include <stdio.h>
#include "list/SingleLinkedList.h"
#include "thread/ThreadDemo.h"
#include "list/Node.h"
#include <string.h>

void singleLinkedListDemo();

int main() {
    printf("Hello, World!\n");
    singleLinkedListDemo();
    statThread();
    return 0;
}

void singleLinkedListDemo() {
    struct Node node = ((struct Node) {"feng", NULL});
    add(&node);
    struct Node node1;

    node1.value = "风落";
    node1.next = NULL;
    add(&node1);

    struct Node node2 = {"展示", NULL};
    add(&node2);

    struct Node node3 = {"客厅", NULL};
    addHeader(&node3);

    struct Node node31 = {"厨房", NULL};
    addHeader(&node31);

    printf("size=%d\n", size());
    printfNodes(getHeader());

    struct Node *node4 = removeNode();
    printf("removeNode value=%s\n", node4->value);

    struct Node *node5 = get();
    printf("get value=%s\n", node5->value);

    printf("for循环——反转单链表\n");
    struct Node *pNode = invert(getHeader());
    printfNodes(getHeader());
}
