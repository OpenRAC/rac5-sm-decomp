typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_00254334;

void func_08E3F0(Node *node)
{
    Node *head = D_00254334;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
