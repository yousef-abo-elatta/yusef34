#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stk_node
{
    int data;
    struct Stk_node *pNext;
} *pTop;
struct Stk_node *creat_stack(int data)
{
    struct Stk_node *pnode = (struct Stk_node *)malloc(sizeof(struct Stk_node));
    if (pnode != NULL)
    {
        pnode->data = data;
        pnode->pNext = NULL;
        return pnode;
    }
}
void push(int data)
{
    struct Stk_node *pnode = creat_stack(data);
    if (pnode != NULL)
    {
        pnode->pNext = pTop;
        pTop = pnode;
        // printf("done");
    }
}

int pop()
{
    int dt = -1;
    if (pTop != NULL)

    {
        struct Stk_node *pCur = pTop;
        dt = pCur->data;
        pTop = pTop->pNext;
        return dt;
        free(pCur);
    }
}

void print_stk()

{
    struct Stk_node *pnode = pTop;
    while (pTop != NULL)

    {
        printf("%d\n", pnode->data);
        pnode = pnode->pNext;
    }
}
void print_pop()

{

    while (pTop != NULL)

    {
        printf("%d\n", pop());
    }
}
int main()
{
    push(6);
    push(5);
    push(4);
    push(8);
    push(9);
    push(7);
    print_stk();
    print_pop();
}