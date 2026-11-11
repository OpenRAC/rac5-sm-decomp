extern unsigned int D_002ADB90;

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
    unsigned int slots[0x20];
    unsigned int owner;
    unsigned int count;
};

void func_09A1D8(Holder *holder, Node *node)
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
    block = (Block *)(((unsigned int)node - holder->base) / 0x8C * 0x8C +
                      holder->base);
    count = block->count - 1;
    block->count = count;
    if (count == 0) {
        slot = block->slots;
        end = block->slots + 0x20;
        while (slot != end) {
            *(unsigned int *)(slot[0] + 4) = slot[1];
            *(unsigned int *)slot[1] = slot[0];
            slot += 4;
        }
        first = block->first;
        *(unsigned int *)(first + 4) = D_002ADB90;
        D_002ADB90 = first;
        block->owner = (unsigned int)holder->blocks;
        holder->blocks = block;
    }
}
