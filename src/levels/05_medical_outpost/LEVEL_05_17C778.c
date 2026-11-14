/* LEVEL_05:0x17C778 -- unlinks the object's record from its neighbour list and releases the resource it holds. */
typedef struct Node {
    struct Node *next;
    char pad04[0x10];
    struct Node *prev;
    char pad18[0x28];
    char *res;
} Node;

typedef struct { char pad00[0x58]; Node *node; } Obj;

extern void func_07E1D8(char *record);

void func_17C778(Obj *o)
{
    Node *n = o->node;
    Node *p = n->prev;

    if (p != 0) {
        p->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
    if (n->res != 0) {
        func_07E1D8(n->res);
        n->res = 0;
    }
}
