/* LEVEL_17:0x1523B0 -- placement copy of LEVEL_16_159FC8.c: tests two candidate targets and applies a state-dependent effect to each. */
typedef struct W {
    char pad0[0x18];
    int f18;
    int f1C;
} W;
typedef struct T {
    char padF4[0xF4];
    int fF4;
} T;
typedef struct O {
    char pad0[0x30];
    float p[3];
    char pad3C[0x1C];
    W *f58;
} O;
extern int D_001C3920;
extern char D_001C7288[];
extern T *func_112478(int i);
extern int func_1524C0(O *o, T *t);
extern void func_036DA8(T *t, int a, int b, float *p, int c, O *o, float f);
extern int func_0A13F8(int a, int b);
extern void func_0A1660(int a, char *b, int c, unsigned d);

void func_1523B0(O *o)
{
    unsigned i;
    int m;
    W *w;
    T *t;
    for (i = 0; i < 2; i++) {
        t = func_112478(i);
        if (t == 0)
            continue;
        if (func_1524C0(o, t) == 0)
            continue;
        func_036DA8(t, 2, 1, o->p, 0, o, 0.0f);
        m = D_001C3920;
        if (m == 0x10) {
            w = o->f58;
            w->f1C = (int)t;
            w->f18 |= 1;
        }
        if (m == 0x11) {
            do {
                if (func_0A13F8(t->fF4 - 1, -0x6A) == 0)
                    func_0A1660(t->fF4 - 1, D_001C7288, -0x6A, 0xFFFFFFFF);
            } while (0);
        }
    }
}
