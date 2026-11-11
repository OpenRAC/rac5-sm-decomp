/* LEVEL_10:0x199438 -- changes an actor's state value and runs the per-state entry actions. */
struct Ctl {
    char pad0[0x1C];
    int state;
    int f20;
    char pad1[0x30 - 0x24];
    float f30;
    char pad2[0x54 - 0x34];
    char f54;
};
struct Obj2 {
    char pad0[0x29];
    unsigned char f29;
    char pad1[0x30 - 0x2A];
    void *f30;
};
struct Act {
    char pad[0x54];
    struct Obj2 *o;
    struct Ctl *c;
};
extern float D_0022DD38[];
extern void func_17F648(char *item, int value);
extern void func_17F670(void *a);
extern int func_027B98(void);

void func_199438(struct Act *a, int ns)
{
    struct Obj2 *o;
    struct Ctl *c;

    o = a->o;
    c = a->c;

    if (c->state == ns)
        return;
    switch (ns) {
    case 1:
        c->f30 = 0.0f;
        o->f29 = 0;
        break;
    case 2:
        if (o->f30)
            func_17F648(o->f30, (int)&c->f54);
        c->f30 = D_0022DD38[func_027B98()];
        o->f29 = 3;
        break;
    case 4:
        if (o->f30)
            func_17F670(o->f30);
        break;
    case 5:
        if (o->f30)
            func_17F648(o->f30, (int)&c->f54);
        o->f29 = 3;
        break;
    }
    c->state = ns;
    c->f20 = 0;
}
