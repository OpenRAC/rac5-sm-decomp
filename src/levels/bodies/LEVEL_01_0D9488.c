/* LEVEL_01:0x0D9488 -- selects the next entry, classifies it and computes a negated scaled value. */
struct Ent {
    char pad[8];
    int a;
    int b;
    int c;
    char pad14[0x2C];
};
struct O {
    struct Ent *ents;
    unsigned int lo;
    unsigned int hi;
    int idx;
    char pad10[4];
    unsigned int kind;
    char pad18[0x10];
    int z28;
    float f2c;
    char pad30[0x98];
    int c8;
    unsigned int max;
};
extern int func_0D8EE8(struct O *o);
extern void func_0AE708(int a, void *p, float x);
extern unsigned int func_0A86E0(void *p);

int func_0D9488(struct O *o)
{
    char tmp[0x10];
    struct Ent *e;
    o->c8 = 1;
    o->lo = o->max;
    if (o->max < o->hi) {
        o->hi = o->max;
    }
    o->idx = func_0D8EE8(o);
    e = &o->ents[o->idx];
    if (e->a != 0) {
        o->kind = 0;
    } else if (e->b != 0) {
        o->kind = 1;
    } else if (e->c != 0) {
        o->kind = 2;
    }
    func_0AE708(0x230, tmp, 0.0f);
    o->f2c = -(float)(o->kind * func_0A86E0(tmp));
    o->z28 = 0;
    return 1;
}
