/* LEVEL_15.REL:0x105610: reviewed 236-byte candidate, held for ABI review.
 * Runs the per-kind handler for the current index, then every handler of the
 * kind.
 * pinned C with gnu-ee-trial links 236/236 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_12B488 returning void with (pointer, int), but the accepted
 * LEVEL_15_12B488.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct O;
typedef void (*Fn)(struct O *o);
typedef struct En {
    int f0;
    Fn f4;
    int f8;
    Fn fC;
    char pad10[0xC];
} En;
typedef struct Tb {
    En *p;
    int n;
} Tb;
typedef struct K {
    int kind;
} K;
typedef struct O {
    char pad0[4];
    int idx;
    char pad8[0x428];
    K *k430;
    char pad434[4];
    char a438[0x14C];
    char a584[0xC];
    char a590[1];
} O;
typedef struct G {
    char pad0[0x1C];
    char b;
} G;
extern Tb D_0016FD68[];
extern G D_002A8B58;
extern void func_12B488(void *p, int a);
extern void func_13B690(void *p);

void func_105610(O *o)
{
    En *e;
    En *end;
    Fn f;
    Tb *t;

    func_12B488(o->a584, 0xD);
    func_12B488(o->a590, 0xF);
    t = D_0016FD68;
    {
        En *c = t[o->k430->kind].p + o->idx;
        f = c->fC;
    }
    if (f != 0)
        f(o);
    e = t[o->k430->kind].p;
    end = e + t[o->k430->kind].n;
    for (; e != end; e++) {
        if (e->f4 != 0)
            e->f4(o);
    }
    func_13B690(o->a438);
    D_002A8B58.b = 0;
}
