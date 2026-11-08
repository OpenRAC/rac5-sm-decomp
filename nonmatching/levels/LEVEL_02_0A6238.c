/* LEVEL_02.REL:0x0A6238: reviewed 128-byte candidate.
 * pinned C with gnu-ee-trial links 128 bytes; first differs at +22.
 * Retry: Restore the retail sentinel in a temporary register before the saved
 * register and the non-likely entry branch; current C has the correct 128-byte extent
 * but differs at +22.
 * No matching credit.
 */
typedef struct Node Node;
typedef struct Owner Owner;

struct Owner {
    char pad[0x10];
    void (*callback)(Node *);
};

struct Node {
    int unused;
    Node *next;
    char pad_08[0xc];
    Owner *owner;
    void *special;
};

extern unsigned char D_002B3B50[];
extern void func_0A61B0(Node *);
extern Node *func_0A6188(Node *);

void func_0A6238(void)
{
    unsigned char *base = D_002B3B50;
    Node *head = (Node *)(base + 0x1c);
    Node *node = *(Node **)(base + 0x20);
    while (node != head) {
        Owner *owner = node->owner;
        if (owner->callback != 0) {
            owner->callback(node);
            func_0A61B0(node);
        }
        if (node->special == 0) {
            node = func_0A6188(node);
        } else {
            node = node->next;
        }
    }
}
