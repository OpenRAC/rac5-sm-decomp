/* USA LEVEL_15.REL:0x1370A0, 388-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 5 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Sub1370A0 {
    char pad0[0x64];
    int flags;
    unsigned int color;
};

struct Glob1370A0 {
    struct Sub1370A0 *sub;
    char pad4[0x144];
    float f148;
    float f14C;
    char pad150[4];
    float f154;
};

extern struct Glob1370A0 D_002F4F88;
extern float cosf(float x);

void func_1370A0(void)
{
    float t;
    float ang;
    float a;
    int c0;
    int c1;
    unsigned int col;
    struct Sub1370A0 *s;

    t = D_002F4F88.f148;
    s = D_002F4F88.sub;
    if (0.0f < t) {
        ang = D_002F4F88.f154;
        a = t * t * (cosf(ang) * 0.5f + 0.5f);
        s->flags |= 0x40;
        c1 = (int)((1.0f - a) * 255.0f + a * 255.0f);
        c0 = (int)((1.0f - a) * 255.0f + a * 0.0f);
        col = (c1 << 24) | (c0 << 16);
        col |= (c0 << 8);
        col |= c1;
        s->color = col;
        D_002F4F88.f148 = t - D_002F4F88.f14C;
        if (3.1415927410125732f < ang) {
            ang -= 6.2831854820251465f;
        } else if (ang < -3.1415927410125732f) {
            ang += 6.2831854820251465f;
        }
        D_002F4F88.f154 = ang;
    } else {
        s->color = 0xFFFFFFFF;
        s->flags &= ~0x40;
    }
}
