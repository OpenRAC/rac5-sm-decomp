typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_0026852C;

void func_0990F0(Node *node)
{
    Node *head = D_0026852C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
