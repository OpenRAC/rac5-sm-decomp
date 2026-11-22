/* USA LEVEL_01.REL:0x02FFC0, 276-byte candidate (21 November 2026).
 * Measured pinned: 1 differing words; first difference at 0xD4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    unsigned char b0, b1, b2, b3;
} Bytes_t;

typedef struct {
    char pad00[0x1C];
    float f1C;
    int f20;
    int f24;
} Motion;

extern int func_07CE40(void *actor);
extern int func_07CAB8(void *actor, int a);
extern void func_07CD28(void *actor, int id, int a, int b, float f, float g);
extern int func_02FE68(float amount, Motion *out, void *actor, float *other,
                       unsigned long flags);
extern void func_031A70(void *obj, int sel, Bytes_t s, int cur);

int func_02FFC0(Motion *m, void *actor, float *other, Bytes_t s,
                unsigned long flags)
{
    int cur;
    int r;
    Bytes_t t;

    cur = func_07CE40(actor);
    if (cur == s.b2) {
        if (func_07CAB8(actor, 0) != 0) {
            m->f1C = 0.0f;
            m->f24 = 0;
            m->f20 = 0;
            func_07CD28(actor, s.b0, 0, 1, 0.15f, m->f1C);
        }
        return 5;
    }
    r = func_02FE68(0.2f, m, actor, other, flags);
    if (r != 2 && r != 0) {
        t = s;
        func_031A70(actor, r, t, cur);
    }
    return r;
}
