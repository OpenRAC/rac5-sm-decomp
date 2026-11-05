typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_002B74EC;

void func_09F5F8(Node *node)
{
    Node *head = D_002B74EC;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
