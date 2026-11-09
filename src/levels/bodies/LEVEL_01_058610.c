/* LEVEL_01:0x058610 -- advances a timer and triggers two effects while it is inside a window. */
struct O {
    char pad[0x20];
    char sub[0x57C];
    int v59c;
    char pad5a0[0x740];
    float t;
};
extern void func_125E78(void *buf, struct O *o, void *src);
extern void func_0584D8(void *buf, int a, int b, float x, float y, void *p, int c, int d);
extern char D_0020E908[];
extern char D_0020E8F8[];

void func_058610(struct O *o)
{
    char buf[16];
    float t = o->t + 1.0f;
    o->t = t;
    if (t >= 5.333333492279053f && t <= 13.333333015441895f) {
        func_125E78(buf, o, D_0020E908);
        func_0584D8(buf, 2, 1, 2.0f, 1.0f, o->sub, o->v59c, 0);
    }
    if (o->t >= 5.333333492279053f && o->t <= 13.333333015441895f) {
        func_125E78(buf, o, D_0020E8F8);
        func_0584D8(buf, 2, 1, 1.0f, 1.0f, o->sub, o->v59c, 0);
    }
}
