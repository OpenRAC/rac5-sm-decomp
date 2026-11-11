typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_002B1F6C;

void func_0A1850(Node *node)
{
    Node *head = D_002B1F6C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
