/* LEVEL_02:0x1ABEF0 -- resets an object's state from its attached record. */
typedef struct { void *a; int pad4; struct { char pad[0x64]; unsigned flags; } *b; struct { char pad[0x64]; unsigned flags; } *c; int pad10; } P;
typedef struct { char pad[0x54]; P *p; } O;
typedef struct { char pad[0x59C]; int q; } G;
extern int D_00246D90;
extern G D_0024C650;
extern void func_070FB8(int a, void *b);
extern void func_050E30(G *g, O *o);
extern void func_003170(G *g, int a, float f);
extern void func_0038B8(char *p, int a, int b, float f);
extern void func_082F58(O *o, int a);

void func_1ABEF0(O *o)
{
    P *p = o->p;
    G *g;
    if (((int *)p)[4] > 0)
        D_00246D90 = ((int *)p)[4];
    g = &D_0024C650;
    if (p->a != 0)
        func_070FB8(g->q, p->a);
    func_050E30(g, o);
    func_003170((G *)((char *)g + 0x30), 1, 0.0f);
    func_0038B8((char *)o + 0x20, 0, 3, 0.0f);
    if (p->b != 0)
        p->b->flags |= 0x200000;
    if (p->c != 0)
        p->c->flags |= 0x200000;
    func_082F58(o, 1);
}
