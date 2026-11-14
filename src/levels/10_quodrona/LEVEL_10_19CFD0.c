/* LEVEL_10:0x19CFD0 -- releases the attached record, unlinks the embedded node (moving its link word into the stored neighbour), then runs the two follow-up helpers. */
struct Node {
    struct Node *next;
    char pad04[0x10];
    struct Node *prev;
};

struct Rec {
    char pad00[0x40];
    struct Node node;
    char pad58[0x88 - 0x58];
    char *handle;
};

struct Obj {
    char pad00[0x58];
    struct Rec *rec;
};

extern void func_081168(char *record);
extern void func_19F538(char *obj);
extern void func_0B3508(void);

void func_19CFD0(struct Obj *o)
{
    struct Rec *rec = o->rec;
    struct Node *n;
    struct Node *q;

    func_081168(rec->handle);
    n = &rec->node;
    if (n->prev != 0) {
        n->prev->next = n->next;
        q = n->next;
        if (q == 0) {
            n->prev = 0;
        } else {
            q->prev = n->prev;
            n->prev = 0;
        }
    }
    func_19F538((char *)o);
    func_0B3508();
}
