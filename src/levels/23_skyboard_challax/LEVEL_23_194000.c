/* LEVEL_23:0x194000 -- placement copy of LEVEL_03_1C5518.c: swaps the linked effect to the given one (releasing the previous) unless a cooldown runs or it is already set, then starts the cooldown. */
typedef struct Val { char pad00[0x14]; float f14, f18, f1C, f20; } Val;
typedef struct Dat { char pad00[0xBC]; void *wBC; Val *wC0; char padC4[0xC]; float fD0; } Dat;
typedef struct Obj { char pad00[0x58]; Dat *f58; } Obj;
extern void func_077F38(void *p);
extern void func_077DD0(Obj *o, Val *v, void **slot, int a, int b, int c, int d, int e, float f14, float f18, float f1C, float f20);
static __inline__ void Attach(Obj *o, Val *v, void **slot)
{
    if (v != 0)
        func_077DD0(o, v, slot, 0, 0, 0, 0, 1, v->f14, v->f18, v->f1C, v->f20);
}
void func_194000(Obj *o, Val *value)
{
    Dat *d;
    if (o == 0) return;
    d = o->f58;
    if (d->fD0 > 0.0f) return;
    if (d->wC0 == value) return;
    if (d->wBC != 0) func_077F38(d->wBC);
    d->wC0 = value;
    Attach(o, value, &d->wBC);
    d->fD0 = 30.0f;
}
