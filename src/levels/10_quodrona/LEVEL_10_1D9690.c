/* LEVEL_10:0x1D9690 -- placement copy of LEVEL_01_1D3A80.c: walks the object's list of nodes and calls func_1D7DA8 for each of the node's 0x30-byte records with the object's word at +0x1C. */
typedef struct Node {
    struct Node *next;
    char pad04[0xC - 4];
    char *items;
    int count;
} Node;

typedef struct {
    char pad00[8];
    Node *list;
    char pad0C[0x1C - 0xC];
    int arg;
} Obj;

extern void func_1D7DA8(char *record);

void func_1D9690(Obj *o)
{
    Node *n;
    int arg;
    char *p;
    char *end;

    n = o->list;
    arg = o->arg;
    if (n != 0) {
        do {
            p = n->items;
            end = p + n->count * 0x30;
            do {
                ((void (*)(char *, int))func_1D7DA8)(p, arg);
                p += 0x30;
            } while (p != end);
            n = n->next;
        } while (n != 0);
    }
}
