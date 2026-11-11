typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_002A5A6C;

void func_0A0950(Node *node)
{
    Node *head = D_002A5A6C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
