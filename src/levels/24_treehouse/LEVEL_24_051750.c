/* LEVEL_24:0x051750 -- placement copy of LEVEL_01_058610.c: advances a timer and triggers two effects while it is inside a window. */
struct O {
    char pad[0x20];
    char sub[0x57C];
    int v59c;
    char pad5a0[0x740];
    float t;
};
extern void func_11BA10(void *buf, struct O *o, void *src);
extern void func_051618(void *buf, int a, int b, float x, float y, void *p, int c, int d);
extern char D_001DF688[];
extern char D_001DF678[];

void func_051750(struct O *o)
{
    char buf[16];
    float t = o->t + 1.0f;
    o->t = t;
    if (t >= 5.333333492279053f && t <= 13.333333015441895f) {
        func_11BA10(buf, o, D_001DF688);
        func_051618(buf, 2, 1, 2.0f, 1.0f, o->sub, o->v59c, 0);
    }
    if (o->t >= 5.333333492279053f && o->t <= 13.333333015441895f) {
        func_11BA10(buf, o, D_001DF678);
        func_051618(buf, 2, 1, 1.0f, 1.0f, o->sub, o->v59c, 0);
    }
}
