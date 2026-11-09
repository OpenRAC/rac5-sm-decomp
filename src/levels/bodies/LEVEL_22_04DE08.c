/* LEVEL_22:0x04DE08 -- placement copy of LEVEL_01_058610.c: advances a timer and triggers two effects while it is inside a window. */
struct O {
    char pad[0x20];
    char sub[0x57C];
    int v59c;
    char pad5a0[0x740];
    float t;
};
extern void func_0FE030(void *buf, struct O *o, void *src);
extern void func_04DCD0(void *buf, int a, int b, float x, float y, void *p, int c, int d);
extern char D_0016BD88[];
extern char D_0016BD78[];

void func_04DE08(struct O *o)
{
    char buf[16];
    float t = o->t + 1.0f;
    o->t = t;
    if (t >= 5.333333492279053f && t <= 13.333333015441895f) {
        func_0FE030(buf, o, D_0016BD88);
        func_04DCD0(buf, 2, 1, 2.0f, 1.0f, o->sub, o->v59c, 0);
    }
    if (o->t >= 5.333333492279053f && o->t <= 13.333333015441895f) {
        func_0FE030(buf, o, D_0016BD78);
        func_04DCD0(buf, 2, 1, 1.0f, 1.0f, o->sub, o->v59c, 0);
    }
}
