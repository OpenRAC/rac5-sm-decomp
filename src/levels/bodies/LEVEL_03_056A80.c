/* LEVEL_03:0x056A80 -- placement copy of LEVEL_01_058610.c: advances a timer and triggers two effects while it is inside a window. */
struct O {
    char pad[0x20];
    char sub[0x57C];
    int v59c;
    char pad5a0[0x740];
    float t;
};
extern void func_124060(void *buf, struct O *o, void *src);
extern void func_056948(void *buf, int a, int b, float x, float y, void *p, int c, int d);
extern char D_00227808[];
extern char D_002277F8[];

void func_056A80(struct O *o)
{
    char buf[16];
    float t = o->t + 1.0f;
    o->t = t;
    if (t >= 5.333333492279053f && t <= 13.333333015441895f) {
        func_124060(buf, o, D_00227808);
        func_056948(buf, 2, 1, 2.0f, 1.0f, o->sub, o->v59c, 0);
    }
    if (o->t >= 5.333333492279053f && o->t <= 13.333333015441895f) {
        func_124060(buf, o, D_002277F8);
        func_056948(buf, 2, 1, 1.0f, 1.0f, o->sub, o->v59c, 0);
    }
}
