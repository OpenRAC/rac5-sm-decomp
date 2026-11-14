/* LEVEL_17:0x16DEC8 -- relocates the linked record's table offsets by the shared base (two plain, one validated against the target's flag word), then runs the follow-up helper. */
typedef struct Rec { char pad00[0x2C]; int f2C; int f30; int f34; } Rec;
typedef struct Obj { char pad00[0x54]; Rec *f54; } Obj;
extern int D_001A7EA4;
extern void func_02D100(Rec *a0);
void func_16DEC8(Obj *o)
{
    Rec *r = o->f54;
    int t;
    if (r->f2C != 0) r->f2C = D_001A7EA4 + r->f2C;
    if (r->f30 != 0) { t = D_001A7EA4 + r->f30; if (*(int *)(t + 0x40) == 0) r->f30 = 0; else r->f30 = t; }
    if (r->f34 != 0) r->f34 = D_001A7EA4 + r->f34;
    func_02D100(r);
}
