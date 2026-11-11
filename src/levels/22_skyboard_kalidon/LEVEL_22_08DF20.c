typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_001F222C;

void func_08DF20(Node *node)
{
    Node *head = D_001F222C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
