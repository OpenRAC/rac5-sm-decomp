/* LEVEL_01:0x0EBDB0 -- searches the node ring for a hit; on a hit, zeroes the counts up to the hit node and trims its first/count, otherwise zeroes every count. */
typedef struct Node {
    struct Node *prev;
    struct Node *next;
    char *data;
    unsigned short first;
    unsigned short count;
} Node;

extern int func_0EBD28(void **output, Node *node, Node *stop, int stride, int float_offset);

int func_0EBDB0(void **output, Node *head, int stride, int float_offset)
{
    Node *node = head->next;
    Node *p;
    Node *q;
    Node *end;
    int first;

    if (func_0EBD28(output, node, node->prev, stride, float_offset) != 0) {
        end = (Node *)output[0];
        for (p = node; p != end; p = p->next)
            p->count = 0;
        first = ((char *)output[1] - p->data) / stride;
        p->count -= first - p->first;
        p->first = first;
        return 1;
    }
    for (q = head->next; q != head; q = q->next)
        q->count = 0;
    return 0;
}
