/* LEVEL_02:0x174748 -- state change handler, sets state 2 and returns 3. */
typedef struct { char pad0[0x14]; float f14; float f18; float f1C; float f20; } S;
typedef struct { char pad0[0x45]; char state; } O;
extern char D_003ACB10[];
extern S *D_0021C628;
extern void func_1E2948(void *a, O *o);
extern void func_019F48(O *o);
extern void func_0872A0(O *o, S *s, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_15BCE8(O *o);
extern void func_082F58(O *o, int x);

int func_174748(O *o, float dt, int k, int b, int c, int d, int e)
{
    S *s;
    if ((unsigned)(k - 6) < 2)
        return 1;
    func_1E2948(D_003ACB10, o);
    func_019F48(o);
    s = D_0021C628;
    if (s)
        func_0872A0(o, s, 0, 0, 0, 0, 0, 1, s->f14, s->f18, s->f1C, s->f20);
    switch (k) {
    case 10:
        func_15BCE8(o);
        o->state = 2;
        func_082F58(o, 1);
        return 3;
    default:
        o->state = 2;
        return 3;
    }
}
