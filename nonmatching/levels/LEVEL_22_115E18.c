/* USA LEVEL_22.REL:0x115E18, 68-byte candidate (14 November 2026).
 * Measured pinned: 12 differing words; first difference at 0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Node {
    char pad_00[0x74];
    Link link;
} Node;

static __inline__ void Unlink(Link *link)
{
    Link *prev = link->prev;

    if (prev != 0) {
        prev->next = link->next;
        if (link->next != 0)
            link->next->prev = link->prev;
        link->prev = 0;
    }
}

void func_115E18(char *object)
{
    Node *node = *(Node **)(object + 0x58);

    if (node->link.prev != 0)
        Unlink(&node->link);
}
