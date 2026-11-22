/* USA LEVEL_01.REL:0x0982A0, 220-byte candidate (21 November 2026).
 * Measured pinned -mno-check-zero-division: 4 differing words; first
 * difference at 0x4C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Node Node;
typedef struct Block Block;
typedef struct Holder Holder;
typedef struct Source Source;

struct Node {
    Node *next;
    Node *prev;
    unsigned int addr;
    unsigned int pad;
};

struct Holder {
    Block *blocks;
    Node *hnext;
    Node *hprev;
    unsigned int base;
};

struct Block {
    unsigned int first;
    Node slots[2];
    unsigned int owner;
    unsigned int count;
};

struct Source {
    unsigned int a;
    unsigned int b;
    unsigned int addr;
};

extern int D_0029829C;
extern Source *func_098108(void *d);

Node *func_0982A0(Holder *h)
{
    Node *tail;
    Node *node;
    Node *spare;
    Block *block;
    Source *src;
    unsigned int addr;

    tail = h->hprev;
    if (tail == (Node *)&h->hnext) {
        block = h->blocks;
        h->blocks = (Block *)block->owner;
        src = func_098108(&D_0029829C);
        block->first = (unsigned int)src;
        node = &block->slots[0];
        spare = &block->slots[1];
        addr = src->addr;
        node->addr = addr;
        spare->next = tail;
        spare->prev = h->hprev;
        spare->addr = addr + 0x100;
        h->hprev->next = spare;
        h->hprev = spare;
        block->count = 1;
    } else {
        node = tail;
        node->next->prev = node->prev;
        node->prev->next = node->next;
        block = (Block *)(((unsigned int)node - h->base) / 0x2C * 0x2C + h->base);
        block->count = block->count + 1;
    }
    return node;
}
