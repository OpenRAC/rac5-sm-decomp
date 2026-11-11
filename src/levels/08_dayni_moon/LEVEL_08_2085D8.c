/* LEVEL_08:0x2085D8 -- placement copy of LEVEL_01_1CD7D0.c: walks the owner list calling a helper on each node, then clears the list head. */

void func_208528(void *o, void *n);

struct Node {
    unsigned char pad00[0x6C];
    struct Node *next;
};

struct Owner {
    unsigned char pad00[0x40];
    struct Node *head;
};

void func_2085D8(struct Owner *o)
{
    struct Node *n;

    n = o->head;
    while (n != 0) {
        func_208528(o, n);
        n = n->next;
    }
    o->head = 0;
}
