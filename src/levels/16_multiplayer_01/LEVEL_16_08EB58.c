typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_002541B4;

void func_08EB58(Node *node)
{
    Node *head = D_002541B4;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
