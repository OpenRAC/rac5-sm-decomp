/* LEVEL_02:0x17AD18 -- releases a held reference, rescales the top byte of a packed value and advances a timer. */
struct Holder {
    void *held;
};
struct Obj {
    char pad0[0x58];
    struct Holder *holder;
    char pad5C[0xC];
    unsigned int packed;
    char pad6C[4];
    float timer;
};
extern void *D_0020B358;
extern void func_09DF10(void *p);
extern unsigned int func_1FFF10(float x);
extern void func_082F58(struct Obj *o, int a);

void func_17AD18(struct Obj *o)
{
    struct Holder *h = o->holder;
    unsigned int v;
    float f;
    float t;

    if (h->held) {
        if (h->held == D_0020B358)
            D_0020B358 = 0;
        else
            func_09DF10(h->held);
        h->held = 0;
    }
    f = (float)(o->packed >> 24) - 11.333333015441895f;
    if (f >= 0.0f) {
        v = o->packed;
        o->packed = (func_1FFF10(f) << 24) | (v & 0xFFFFFF);
    }
    t = o->timer + 1.0f;
    o->timer = t;
    if (t >= 22.5f)
        func_082F58(o, 1);
}
