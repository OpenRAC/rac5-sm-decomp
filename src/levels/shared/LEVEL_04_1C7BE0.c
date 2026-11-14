/* LEVEL_04:0x1C7BE0 -- when the state byte is 2, unlinks the object's record from its neighbour list. */
typedef struct Node {
    struct Node *next;
    char pad04[0x10];
    struct Node *prev;
} Node;

typedef struct { char pad00[0x45]; unsigned char state; char pad46[0x12]; Node *node; } Obj;

void func_1C7BE0(Obj *o)
{
    Node *n;
    Node *p;

    if (o->state == 2) {
        n = o->node;
        p = n->prev;
        if (p != 0) {
            p->next = n->next;
            if (n->next != 0) {
                n->next->prev = n->prev;
            }
            n->prev = 0;
        }
    }
}
