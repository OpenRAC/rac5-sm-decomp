/* LEVEL_21:0x0498A0 -- placement copy of LEVEL_01_058610.c: advances a timer and triggers two effects while it is inside a window. */
struct O {
    char pad[0x20];
    char sub[0x57C];
    int v59c;
    char pad5a0[0x740];
    float t;
};
extern void func_0EAA88(void *buf, struct O *o, void *src);
extern void func_049768(void *buf, int a, int b, float x, float y, void *p, int c, int d);
extern char D_00163088[];
extern char D_00163078[];

void func_0498A0(struct O *o)
{
    char buf[16];
    float t = o->t + 1.0f;
    o->t = t;
    if (t >= 5.333333492279053f && t <= 13.333333015441895f) {
        func_0EAA88(buf, o, D_00163088);
        func_049768(buf, 2, 1, 2.0f, 1.0f, o->sub, o->v59c, 0);
    }
    if (o->t >= 5.333333492279053f && o->t <= 13.333333015441895f) {
        func_0EAA88(buf, o, D_00163078);
        func_049768(buf, 2, 1, 1.0f, 1.0f, o->sub, o->v59c, 0);
    }
}
