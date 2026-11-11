/* LEVEL_03:0x159D40 -- placement copy of LEVEL_02_174748.c: state change handler, sets state 2 and returns 3. */
typedef struct { char pad0[0x14]; float f14; float f18; float f1C; float f20; } S;
typedef struct { char pad0[0x45]; char state; } O;
extern char D_003AFBD0[];
extern S *D_0021FB68;
extern void func_1DE448(void *a, O *o);
extern void func_0192C8(O *o);
extern void func_0807B0(O *o, S *s, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_1548E8(O *o);
extern void func_07C468(O *o, int x);

int func_159D40(O *o, float dt, int k, int b, int c, int d, int e)
{
    S *s;
    if ((unsigned)(k - 6) < 2)
        return 1;
    func_1DE448(D_003AFBD0, o);
    func_0192C8(o);
    s = D_0021FB68;
    if (s)
        func_0807B0(o, s, 0, 0, 0, 0, 0, 1, s->f14, s->f18, s->f1C, s->f20);
    switch (k) {
    case 10:
        func_1548E8(o);
        o->state = 2;
        func_07C468(o, 1);
        return 3;
    default:
        o->state = 2;
        return 3;
    }
}
