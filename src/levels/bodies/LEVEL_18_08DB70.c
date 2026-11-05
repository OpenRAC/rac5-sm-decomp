typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_00254534;

void func_08DB70(Node *node)
{
    Node *head = D_00254534;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
