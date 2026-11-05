typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_0029C66C;

void func_09F870(Node *node)
{
    Node *head = D_0029C66C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
