/* LEVEL_01:0x18E198 -- releases the child's linked effect and unlinks its list node. */
typedef struct Node {
    struct Node *next;
    char pad[0x10];
    struct Node *back;
} Node;

typedef struct {
    char pad0[0x450];
    Node node;
    char pad1[0x4A4 - 0x450 - sizeof(Node)];
    void *link;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

extern void func_07C670(void *o, int mode);

void func_18E198(Obj *o)
{
    Child *c = o->child;
    Node *n;

    func_07C670(c->link, 1);
    n = &c->node;
    if (n->back != 0) {
        n->back->next = c->node.next;
        if (c->node.next == 0) {
            n->back = 0;
            return;
        }
        c->node.next->back = n->back;
        n->back = 0;
    }
}
