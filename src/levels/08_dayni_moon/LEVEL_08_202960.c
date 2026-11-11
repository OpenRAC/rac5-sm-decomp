/* LEVEL_08:0x202960 -- runs a helper on an embedded record, then moves a link word into a stored node. */
struct Node12 {
    int w00;
    char pad04[0x10];
    struct Node12 *p14;
};

struct Sub12 {
    unsigned int w00;
    char pad04[0x10];
    struct Node12 *p14;
};

struct Obj12 {
    char pad0[0x4C];
    int f4C;
    struct Sub12 sub50;
};

void func_20FC70(void *p);

void func_202960(struct Obj12 *s0)
{
    struct Sub12 *v;
    struct Node12 *p;
    struct Node12 *q;

    func_20FC70(&s0->f4C);
    v = &s0->sub50;
    p = v->p14;
    if (p == 0) {
        return;
    }
    p->w00 = v->w00;
    q = (struct Node12 *)v->w00;
    if (q == 0) {
        v->p14 = 0;
        return;
    }
    q->p14 = v->p14;
    v->p14 = 0;
}
