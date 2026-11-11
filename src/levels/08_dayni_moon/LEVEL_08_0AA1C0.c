/* LEVEL_08:0x0AA1C0 -- placement copy of LEVEL_01_09F8C0.c: rebuilds a linked list, moving zero-amount nodes to a free list and summing the rest. */
typedef struct Link Link;
struct Link {
    Link *previous;
    Link *next;
};

typedef struct Node Node;
struct Node {
    Node *next;
    Link link;
    int unused;
    int amount;
    int limit;
};

typedef struct {
    int unused[2];
    Node *head;
    Link sentinel;
    int pad_14;
    int total;
} Container;

extern Node *D_002EB8D4;

void func_0AA1C0(Container *container)
{
    Node **link = &container->head;
    Node *node;
    Link *sentinel = &container->sentinel;
    int total = 0;
    sentinel->next = sentinel;
    sentinel->previous = sentinel;
    while ((node = *link) != 0) {
        int amount = node->amount;
        if (amount == 0) {
            *link = node->next;
            node->next = D_002EB8D4;
            D_002EB8D4 = node;
        } else {
            total += amount;
            if (amount < node->limit) {
                Link *entry = &node->link;
                Link *s = &container->sentinel;
                Link *first = s->next;
                entry->previous = s;
                entry->next = first;
                first->previous = entry;
                s->next = entry;
            }
            link = &node->next;
        }
    }
    container->total = total;
}
