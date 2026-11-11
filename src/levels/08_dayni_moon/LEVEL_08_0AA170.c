typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_002EB8EC;

void func_0AA170(Node *node)
{
    Node *head = D_002EB8EC;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
