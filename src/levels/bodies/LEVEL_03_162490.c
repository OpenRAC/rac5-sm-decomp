/* LEVEL_03:0x162490 -- picks a next state from a probe result. */
typedef struct P { char pad[0x2C]; int v; } P;
typedef struct Q { char pad[0x40]; unsigned char b; } Q;
typedef struct O { char pad[0x45]; unsigned char st; char pad2[0xC]; P *p; Q *q; } O;
extern int func_161FB8(O *);
extern void func_162010(O *, int);
extern int func_030E38(P *, O *, int, int, int, float, float);
int func_162490(O *o)
{
    P *p = o->p;
    Q *q = o->q;
    int s = o->st;
    int r;
    if (func_161FB8(o)) {
        func_162010(o, 14);
        return 14;
    }
    r = func_030E38(p, o, p->v, q->b, 0, 0.1f, 4.5f);
    if (r == 2) {
        s = 11;
        func_162010(o, 11);
    } else if (r == 1) {
        s = 12;
        func_162010(o, 12);
    } else if (r == 0) {
        s = 9;
        func_162010(o, 9);
    }
    return s;
}
