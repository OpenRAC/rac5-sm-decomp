/* LEVEL_10.REL:0x199438: reviewed 260-byte candidate, held for ABI review.
 * Changes an actor's state value and runs the per-state entry actions.
 * pinned C with gnu-ee-trial links 260/260 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_17F648 returning void with (pointer, pointer), but the
 * accepted LEVEL_10_17F648.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern void func_17F648(void *a, char *b);
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
            func_17F648(o->f30, &c->f54);
        c->f30 = D_0022DD38[func_027B98()];
        o->f29 = 3;
        break;
    case 4:
        if (o->f30)
            func_17F670(o->f30);
        break;
    case 5:
        if (o->f30)
            func_17F648(o->f30, &c->f54);
        o->f29 = 3;
        break;
    }
    c->state = ns;
    c->f20 = 0;
}
