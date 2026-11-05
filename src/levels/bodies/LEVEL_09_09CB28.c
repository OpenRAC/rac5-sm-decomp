typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_00283DEC;

void func_09CB28(Node *node)
{
    Node *head = D_00283DEC;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
