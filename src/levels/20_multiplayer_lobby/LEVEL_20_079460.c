typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_001779F4;

void func_079460(Node *node)
{
    Node *head = D_001779F4;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
