/* LEVEL_16:0x159FC8 -- tests two candidate targets and applies a state-dependent effect to each. */
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
extern int D_001D04A0;
extern char D_001D4F40[];
extern T *func_112CE8(int i);
extern int func_15A0D8(O *o, T *t);
extern void func_037458(T *t, int a, int b, float *p, int c, O *o, float f);
extern int func_0A1F18(int a, int b);
extern void func_0A2180(int a, char *b, int c, unsigned d);

void func_159FC8(O *o)
{
    unsigned i;
    int m;
    W *w;
    T *t;
    for (i = 0; i < 2; i++) {
        t = func_112CE8(i);
        if (t == 0)
            continue;
        if (func_15A0D8(o, t) == 0)
            continue;
        func_037458(t, 2, 1, o->p, 0, o, 0.0f);
        m = D_001D04A0;
        if (m == 0x10) {
            w = o->f58;
            w->f1C = (int)t;
            w->f18 |= 1;
        }
        if (m == 0x11) {
            do {
                if (func_0A1F18(t->fF4 - 1, -0x6A) == 0)
                    func_0A2180(t->fF4 - 1, D_001D4F40, -0x6A, 0xFFFFFFFF);
            } while (0);
        }
    }
}
