/* LEVEL_07:0x1651C0 -- unlinks the linked record from its list neighbours, then runs the follow-up step. */
typedef struct Node Node;
struct Node { Node *prev; char pad04[0x10]; Node *next; };
typedef struct Obj { char pad00[0x58]; Node *f58; } Obj;
extern void func_169A58(Obj *o, Node *r);
void func_1651C0(Obj *o)
{
    Node *r = o->f58;
    Node *n = r->next;
    Node *p;
    if (n != 0) {
        n->prev = r->prev;
        p = r->prev;
        if (p != 0) p->next = r->next;
        r->next = 0;
    }
    func_169A58(o, r);
}
