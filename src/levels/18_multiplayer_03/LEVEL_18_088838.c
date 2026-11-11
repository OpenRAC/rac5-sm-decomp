extern unsigned int D_0024EA5C;

typedef struct Node Node;
typedef struct Block Block;
typedef struct Holder Holder;

struct Node {
    Node *next;
    Node *prev;
};

struct Holder {
    Block *blocks;
    Node head;
    unsigned int base;
};

struct Block {
    unsigned int first;
    unsigned int slots[8];
    unsigned int owner;
    unsigned int count;
};

extern void func_0886B0(Holder *holder, Node *node);

void func_088838(Holder *holder, Node *node)
{
    Node *head;
    Block *block;
    unsigned int count;
    unsigned int first;
    unsigned int *slot;
    unsigned int *end;

    head = &holder->head;
    node->next = head;
    node->prev = head->prev;
    head->prev->next = node;
    head->prev = node;
    block = (Block *)(((unsigned int)node - holder->base) / 0x2C * 0x2C +
                      holder->base);
    count = block->count - 1;
    block->count = count;
    if (count == 0) {
        slot = block->slots;
        end = block->slots + 8;
        while (slot != end) {
            *(unsigned int *)(slot[0] + 4) = slot[1];
            *(unsigned int *)slot[1] = slot[0];
            slot += 4;
        }
        first = block->first;
        func_0886B0((Holder *)&D_0024EA5C, (Node *)first);
        block->owner = (unsigned int)holder->blocks;
        holder->blocks = block;
    }
}
