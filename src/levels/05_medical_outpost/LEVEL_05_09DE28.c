typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_0028852C;

void func_09DE28(Node *node)
{
    Node *head = D_0028852C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
