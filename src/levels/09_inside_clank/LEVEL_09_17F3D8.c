/* LEVEL_09:0x17F3D8 -- unlinks the list node embedded in the object's record from its neighbours and clears its back link. */
typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *back;
} Node;

typedef struct Rec {
    char pad0[0x24];
    Node node;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

void func_17F3D8(Obj *o)
{
    Rec *r = o->rec;
    Node *n = &r->node;
    if (n->back != 0) {
        n->back->next = r->node.next;
        if (r->node.next != 0)
            r->node.next->back = n->back;
        n->back = 0;
    }
}
