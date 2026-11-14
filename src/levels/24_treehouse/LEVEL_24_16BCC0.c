/* LEVEL_24:0x16BCC0 -- placement copy of LEVEL_01_186C90.c: walks the object's list of nodes and calls func_16B770 for each of the node's 0x40-byte records with the object's word at +0x1C. */
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

extern void func_16B770(void);

void func_16BCC0(Obj *o)
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
            end = p + n->count * 0x40;
            do {
                ((void (*)(char *, int))func_16B770)(p, arg);
                p += 0x40;
            } while (p != end);
            n = n->next;
        } while (n != 0);
    }
}
