/* LEVEL_19:0x159A68 -- runs a helper on the object, then unlinks the record's embedded node by moving its link word into the stored neighbour. */
struct Node {
    int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Sub {
    unsigned int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Rec {
    char pad00[0x2C];
    struct Sub sub;
};

struct Obj {
    char pad00[0x58];
    struct Rec *rec;
};

extern void func_118F28(struct Obj *o);

void func_159A68(struct Obj *o)
{
    struct Rec *rec;
    struct Sub *v;
    struct Node *p;
    struct Node *q;

    rec = o->rec;
    func_118F28(o);
    v = &rec->sub;
    p = v->p14;
    if (p == 0) {
        return;
    }
    p->w00 = v->w00;
    q = (struct Node *)v->w00;
    if (q == 0) {
        v->p14 = 0;
        return;
    }
    q->p14 = v->p14;
    v->p14 = 0;
}
