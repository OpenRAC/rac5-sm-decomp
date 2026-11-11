/* LEVEL_10:0x196218 -- placement copy of LEVEL_02_1ABEF0.c: resets an object's state from its attached record. */
typedef struct { void *a; int pad4; struct { char pad[0x64]; unsigned flags; } *b; struct { char pad[0x64]; unsigned flags; } *c; int pad10; } P;
typedef struct { char pad[0x54]; P *p; } O;
typedef struct { char pad[0x59C]; int q; } G;
extern int D_00238C90;
extern G D_0023E540;
extern void func_06AD50(int a, void *b);
extern void func_04A5B0(G *g, O *o);
extern void func_002F20(G *g, int a, float f);
extern void func_003668(char *p, int a, int b, float f);
extern void func_07CCA0(O *o, int a);

void func_196218(O *o)
{
    P *p = o->p;
    G *g;
    if (((int *)p)[4] > 0)
        D_00238C90 = ((int *)p)[4];
    g = &D_0023E540;
    if (p->a != 0)
        func_06AD50(g->q, p->a);
    func_04A5B0(g, o);
    func_002F20((G *)((char *)g + 0x30), 1, 0.0f);
    func_003668((char *)o + 0x20, 0, 3, 0.0f);
    if (p->b != 0)
        p->b->flags |= 0x200000;
    if (p->c != 0)
        p->c->flags |= 0x200000;
    func_07CCA0(o, 1);
}
