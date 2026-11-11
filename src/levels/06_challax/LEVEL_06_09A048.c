typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_002893EC;

void func_09A048(Node *node)
{
    Node *head = D_002893EC;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
