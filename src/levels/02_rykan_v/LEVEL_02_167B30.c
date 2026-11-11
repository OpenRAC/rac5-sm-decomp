/* LEVEL_02:0x167B30 -- for a flagged table entry, refreshes it and classifies the two vector deltas. */
struct A {
    char pad[0x30];
    float fx;
    float fy;
    float fz;
};

struct B {
    float x;
    float y;
    float z;
};

struct Ent {
    struct A *a;
    struct B *b;
    char pad[0xc];
    unsigned char flags;
};

struct Obj {
    char pad[0x54];
    struct Ent *ents;
};

void func_167B00(struct Obj *p, int a, struct B *b);

int func_167B30(struct Obj *p, int a1)
{
    unsigned int m;
    struct Ent *e;
    struct B *b;
    struct A *a;
    float *q;

    m = a1 & 0xFF;
    e = (struct Ent *)((char *)p->ents + m * 0x18);
    if (e->flags & 2) {
        b = e->b;
        a = e->a;
        q = &a->fx;
        func_167B00(p, m, b);
        if (0.3f < fabsf(a->fx - b->x) || 0.3f < fabsf(q[2] - b->y)) {
            return 1;
        }
        return 2;
    }
    return 0;
}
