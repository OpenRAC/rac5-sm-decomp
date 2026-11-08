/* LEVEL_01.REL:0x09F8C0: reviewed 132-byte candidate.
 * pinned C with gnu-ee-trial links 132 bytes; first differs at +2.
 * Retry: Recover the source live ranges for the sentinel and link cursor; the current
 * first mismatch is register allocation at entry.
 * No matching credit.
 */
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
    int total;
} Container;

extern Node *D_0029C654;

void func_09F8C0(Container *container)
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
            node->next = D_0029C654;
            D_0029C654 = node;
        } else {
            total += amount;
            if (amount < node->limit) {
                Link *entry = &node->link;
                Link *first = sentinel->next;
                entry->previous = sentinel;
                entry->next = first;
                first->previous = entry;
                sentinel->next = entry;
            }
            link = &node->next;
        }
    }
    container->total = total;
}
