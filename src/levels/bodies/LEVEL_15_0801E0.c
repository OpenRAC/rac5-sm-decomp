typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_001B46AC;

void func_0801E0(Node *node)
{
    Node *head = D_001B46AC;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
