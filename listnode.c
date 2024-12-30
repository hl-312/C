#include <stdlib.h>
#include <stdio.h>

//节点结构体定义
typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

//构造函数
ListNode *newListNode(int val)
{
    ListNode *node = (ListNode *) malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

/* 初始化链表 1-> 3-> 2-> 5-> 4 */
// 初始化各个节点

int main(void)
{
    ListNode *node1 = newListNode(1);
    ListNode *node3 = newListNode(3);
    ListNode *node2 = newListNode(2);
    ListNode *node5 = newListNode(5);
    ListNode *node4 = newListNode(4);
    node1->next = node3;
    node3->next = node2;
    node2->next = node5;
    node5->next = node4;
    node4->next = NULL;
    
    ListNode *tmp = node1;
    char i = '0';
    do
    {
        printf("node%c->val = %d.\n", i, tmp->val);
        tmp = tmp->next;
        i++;
    }  while (tmp != NULL);
    
    return 0;
}