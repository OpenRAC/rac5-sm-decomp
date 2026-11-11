/* LEVEL_09:0x152310 -- placement copy of LEVEL_02_174748.c: state change handler, sets state 2 and returns 3. */
typedef struct { char pad0[0x14]; float f14; float f18; float f1C; float f20; } S;
typedef struct { char pad0[0x45]; char state; } O;
extern char D_0037C440[];
extern S *D_001F0FA0;
extern void func_1B3D48(void *a, O *o);
extern void func_018928(O *o);
extern void func_07D450(O *o, S *s, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_14E438(O *o);
extern void func_079108(O *o, int x);

int func_152310(O *o, float dt, int k, int b, int c, int d, int e)
{
    S *s;
    if ((unsigned)(k - 6) < 2)
        return 1;
    func_1B3D48(D_0037C440, o);
    func_018928(o);
    s = D_001F0FA0;
    if (s)
        func_07D450(o, s, 0, 0, 0, 0, 0, 1, s->f14, s->f18, s->f1C, s->f20);
    switch (k) {
    case 10:
        func_14E438(o);
        o->state = 2;
        func_079108(o, 1);
        return 3;
    default:
        o->state = 2;
        return 3;
    }
}
