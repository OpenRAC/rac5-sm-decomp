/* LEVEL_08:0x0307D0 -- placement copy of LEVEL_01_02FFC0.c: compares the actor's current action with the stored one; when equal it clears the motion block and restarts the action, otherwise it steers the actor and forwards the result to the input dispatcher. */
typedef struct {
    unsigned char b0, b1, b2, b3;
} Bytes_t;

typedef struct {
    char pad00[0x1C];
    float f1C;
    int f20;
    int f24;
} Motion;

extern int func_084DB0(void *actor);
extern int func_084A40(void *actor, int a);
extern void func_084C98(void *actor, int id, int a, int b, float f, float g);
extern int func_030678(float amount, Motion *out, void *actor, float *other,
                       unsigned long flags);
extern void func_031C20(void *obj, int sel, Bytes_t s, int cur);

int func_0307D0(Motion *m, void *actor, float *other, Bytes_t s,
                unsigned long flags)
{
    int cur;
    int r;
    Bytes_t t;

    cur = func_084DB0(actor);
    if (cur == s.b2) {
        if (func_084A40(actor, 0) != 0) {
            m->f1C = 0.0f;
            m->f24 = 0;
            m->f20 = 0;
            func_084C98(actor, s.b0, 0, 1, 0.15f, m->f1C);
        }
        return 5;
    }
    r = func_030678(0.2f, m, actor, other, flags);
    if (r != 2 && r != 0) {
        t = s;
        func_031C20(actor, r, t, cur);
    }
    return r;
}
