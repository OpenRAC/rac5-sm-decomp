/* LEVEL_08:0x1AC770 -- unlinks the linked record from its list neighbours, then releases its attached block when present. */
typedef struct Node Node;
struct Node { Node *prev; char pad04[0x10]; Node *next; void *blk; };
typedef struct Obj { char pad00[0x58]; Node *f58; } Obj;
extern void func_088AA8(void *p);
void func_1AC770(Obj *o)
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
    if (r->blk != 0) func_088AA8(r->blk);
}
