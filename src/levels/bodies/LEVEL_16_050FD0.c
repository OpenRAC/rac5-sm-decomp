/* LEVEL_16:0x050FD0 -- placement copy of LEVEL_01_058610.c: advances a timer and triggers two effects while it is inside a window. */
struct O {
    char pad[0x20];
    char sub[0x57C];
    int v59c;
    char pad5a0[0x740];
    float t;
};
extern void func_1044F0(void *buf, struct O *o, void *src);
extern void func_050FC8(void *buf, int a, int b, float x, float y, void *p, int c, int d);
extern char D_001C37C8[];
extern char D_001C37B8[];

void func_050FD0(struct O *o)
{
    char buf[16];
    float t = o->t + 1.0f;
    o->t = t;
    if (t >= 5.333333492279053f && t <= 13.333333015441895f) {
        func_1044F0(buf, o, D_001C37C8);
        func_050FC8(buf, 2, 1, 2.0f, 1.0f, o->sub, o->v59c, 0);
    }
    if (o->t >= 5.333333492279053f && o->t <= 13.333333015441895f) {
        func_1044F0(buf, o, D_001C37B8);
        func_050FC8(buf, 2, 1, 1.0f, 1.0f, o->sub, o->v59c, 0);
    }
}
