/* LEVEL_02:0x1A4310 -- unlinks the list node at the start of the object's record from its neighbours, clears its back link, then notifies the object. */
typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *back;
} Node;

typedef struct Obj {
    char pad0[0x58];
    Node *rec;
} Obj;

extern void func_019FB8(Obj *o);

void func_1A4310(Obj *o)
{
    Node *n = o->rec;

    if (n->back != 0) {
        n->back->next = n->next;
        if (n->next != 0)
            n->next->back = n->back;
        n->back = 0;
    }
    func_019FB8(o);
}
