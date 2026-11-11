typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_002B3B6C;

void func_0A6160(Node *node)
{
    Node *head = D_002B3B6C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
