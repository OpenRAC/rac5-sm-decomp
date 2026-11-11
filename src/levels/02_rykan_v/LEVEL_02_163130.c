/* LEVEL_02:0x163130 -- unlinks the list node embedded in the object's record from its neighbours, clears its back link, then notifies the object. */
typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *back;
} Node;

typedef struct Rec {
    char pad0[0x48];
    Node node;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern void func_019FB8(Obj *o);

void func_163130(Obj *o)
{
    Rec *r = o->rec;
    Node *n = &r->node;
    if (n->back != 0) {
        n->back->next = r->node.next;
        if (r->node.next != 0)
            r->node.next->back = n->back;
        n->back = 0;
    }
    func_019FB8(o);
}
