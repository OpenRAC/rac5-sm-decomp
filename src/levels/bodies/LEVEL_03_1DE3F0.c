/* LEVEL_03:0x1DE3F0 -- placement copy of LEVEL_01_1CD7D0.c: walks the owner list calling a helper on each node, then clears the list head. */

void func_1DE340(void *o, void *n);

struct Node {
    unsigned char pad00[0x6C];
    struct Node *next;
};

struct Owner {
    unsigned char pad00[0x40];
    struct Node *head;
};

void func_1DE3F0(struct Owner *o)
{
    struct Node *n;

    n = o->head;
    while (n != 0) {
        func_1DE340(o, n);
        n = n->next;
    }
    o->head = 0;
}
