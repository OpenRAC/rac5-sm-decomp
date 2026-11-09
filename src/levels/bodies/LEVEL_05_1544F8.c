/* LEVEL_05:0x1544F8 -- placement copy of LEVEL_02_174748.c: state change handler, sets state 2 and returns 3. */
typedef struct { char pad0[0x14]; float f14; float f18; float f1C; float f20; } S;
typedef struct { char pad0[0x45]; char state; } O;
extern char D_00380B68[];
extern S *D_001F6518;
extern void func_1BCC38(void *a, O *o);
extern void func_018B88(O *o);
extern void func_07E070(O *o, S *s, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_150E48(O *o);
extern void func_079CF8(O *o, int x);

int func_1544F8(O *o, int k)
{
    S *s;
    if ((unsigned)(k - 6) < 2)
        return 1;
    func_1BCC38(D_00380B68, o);
    func_018B88(o);
    s = D_001F6518;
    if (s)
        func_07E070(o, s, 0, 0, 0, 0, 0, 1, s->f14, s->f18, s->f1C, s->f20);
    switch (k) {
    case 10:
        func_150E48(o);
        o->state = 2;
        func_079CF8(o, 1);
        return 3;
    default:
        o->state = 2;
        return 3;
    }
}
