/* LEVEL_02:0x1B3300 -- relocates the linked record's table offsets by the shared base (three plain, two validated against the target's flag word), then runs the follow-up helper. */
typedef struct Rec { char pad00[0x2C]; int f2C; int f30; int f34; int pad38; int f3C; int f40; } Rec;
typedef struct Obj { char pad00[0x54]; Rec *f54; } Obj;
extern int D_0021BD54;
extern void func_030128(Rec *r);
void func_1B3300(Obj *o)
{
    Rec *r = o->f54;
    int t;
    if (r->f2C != 0) r->f2C = D_0021BD54 + r->f2C;
    if (r->f30 != 0) { t = D_0021BD54 + r->f30; if (*(int *)(t + 0x40) == 0) r->f30 = 0; else r->f30 = t; }
    if (r->f34 != 0) r->f34 = D_0021BD54 + r->f34;
    if (r->f3C != 0) { t = D_0021BD54 + r->f3C; if (*(int *)(t + 0x40) == 0) r->f3C = 0; else r->f3C = t; }
    if (r->f40 != 0) r->f40 = D_0021BD54 + r->f40;
    func_030128(r);
}
