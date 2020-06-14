#include <stdio.h>
#include "list/SingleLinkedList.h"
#include "list/Node.h"
#include <string.h>

void singleLinkedListDemo();

int main() {
    printf("Hello, World!\n");
    singleLinkedListDemo();
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

    printf("size=%d\n", size());
    printfNodes(getHeader());

    printf("for循环——反转单链表\n");
    struct Node *pNode = invert(getHeader());
    printfNodes(pNode);


}
