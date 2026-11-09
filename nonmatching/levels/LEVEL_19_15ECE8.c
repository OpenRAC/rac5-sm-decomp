/* LEVEL_19.REL:0x15ECE8: reviewed 516-byte candidate, held for ABI review.
 * Toggles an owner's effect state (starting or stopping its effects), then
 * builds a transform and parameters for a queued effect.
 * gnu-ee-trial C with gnu-ee-trial links 516/516 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_0737C8 returning void with (int), but the accepted
 * LEVEL_19_0737C8.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Eff {
    char pad0[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
} Eff;

typedef struct Slot {
    char pad0[0x378];
    int w378;
    int w37c;
    int w380;
    char pad384[0x2C];
    float f3b0;
} Slot;

typedef struct Obj {
    char pad0[0x58];
    Slot *w58;
} Obj;

typedef struct Block {
    char pad0[4];
    unsigned short h4;
    unsigned short h6;
} Block;

extern Eff *D_001BF050;
extern Eff *D_001BF048;
extern Block D_001BF030;
extern char D_001D65E8[];
extern char D_002E57F0[];
extern void *memset(void *p, int c, unsigned n);
extern void func_073660(Obj *o, Eff *e, void *p, int a, int b, int c, int d, int f,
                        float f0, float f1, float f2, float f3);
extern void func_0737C8(int a);
extern void func_104C00(float *m, Obj *o, char *t);
extern void func_063B18(Block *b, float *m, int a, int c, char *t, float f0, float f1, float f2);

void func_15ECE8(Obj *o, int flag)
{
    Slot *s = o->w58;

    if (s->w378 == 0) {
        if (flag) {
            Eff *e = D_001BF050;
            if (e)
                func_073660(o, e, 0, 0, 0, 0, 0, 1, e->f14, e->f18, e->f1c, e->f20);
            e = D_001BF048;
            if (e)
                func_073660(o, e, &s->w380, 0, 0, 0, 0, 1, e->f14, e->f18, e->f1c, e->f20);
        }
    } else if (!flag) {
        if (s->w380) {
            func_0737C8(s->w380);
            s->w380 = 0;
        }
        if (s->w37c) {
            func_0737C8(s->w37c);
            s->w37c = 0;
        }
    }
    s->w378 = flag;
}

void func_15EDE8(Obj *o)
{
    float m[16];
    Slot *s;
    float x;

    s = o->w58;
    memset(m, 0, 0x40);
    m[0] = -1.0f;
    m[5] = -1.0f;
    m[10] = 1.0f;
    m[12] = 1.0f;
    m[13] = 1.0f;
    m[14] = 1.0f;
    m[15] = 1.0f;
    func_104C00(&m[12], o, D_001D65E8);
    x = s->f3b0;
    D_001BF030.h4 = 0x44B8;
    {
        unsigned short t = (int)(s->f3b0 * 2.0f * 2.0f);
        D_001BF030.h6 = t << 12 | 0x5B8;
    }
    func_063B18(&D_001BF030, m, 0, 0, D_002E57F0, 1.0f, -x * 2.0f + 3.0f, x * 4.0f * 2.0f + 4.0f);
}
