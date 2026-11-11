/* LEVEL_15:0x1202A8 -- walks the object's list of nodes and calls func_11F530 for each of the node's 0x94-byte records with the object's pointer at +0x38. */
typedef struct Node {
    struct Node *next;
    char pad04[0xC - 4];
    char *items;
    int count;
} Node;

typedef struct {
    char pad00[8];
    Node *list;
    char pad0C[0x38 - 0xC];
    char *arg;
} Obj;

extern void func_11F530(char *first, char *second);

void func_1202A8(Obj *o)
{
    Node *n;
    char *arg;
    char *p;
    char *end;

    n = o->list;
    arg = o->arg;
    if (n != 0) {
        do {
            p = n->items;
            end = p + n->count * 0x94;
            do {
                func_11F530(p, arg);
                p += 0x94;
            } while (p != end);
            n = n->next;
        } while (n != 0);
    }
}
