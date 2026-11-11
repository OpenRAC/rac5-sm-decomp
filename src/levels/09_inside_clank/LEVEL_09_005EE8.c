/* LEVEL_09:0x005EE8 -- placement copy of LEVEL_01_005EE8.c: integrates the spring angle and wraps the three angles. */
typedef unsigned long u64;
typedef struct {
    unsigned char pad00[0x40];
    u64 flags;
    unsigned char pad48[0xA0 - 0x48];
    float a0;
    unsigned char padA4[0xB0 - 0xA4];
    int mode;
    unsigned char padB4[0x14C - 0xB4];
    float a1;
    unsigned char pad150[0x26C - 0x150];
    float cur;
    unsigned char pad270[4];
    float target;
    unsigned char pad278[4];
    float gain;
    unsigned char pad280[0x354 - 0x280];
    float a2;
} State;
extern State *D_001D9054[1];
extern float func_0023B0(float a, float b, float c, float d, float e);

void func_005EE8(void)
{
    State *s = D_001D9054[0];
    if (s->mode != 2) {
        s->cur = 0.0f;
        return;
    }
    if (s->target != 0.0f) {
        s->flags |= 0x10ULL;
        D_001D9054[0]->flags |= 0x20ULL;
    }
    D_001D9054[0]->cur = func_0023B0(D_001D9054[0]->cur, D_001D9054[0]->target, 0.055850543f,
                                  D_001D9054[0]->gain * -2.617994f * 0.033333335f,
                                  D_001D9054[0]->gain * 2.617994f * 0.033333335f);
    if (__builtin_fabsf(D_001D9054[0]->cur) < 0.00048828125f)
        return;
    if ((unsigned char)(D_001D9054[0]->flags >> 19) & 1) {
        float a = D_001D9054[0]->a1 + D_001D9054[0]->cur;
        if (a > 3.14159265f)
            a -= 6.28318531f;
        else if (a < -3.14159265f)
            a += 6.28318531f;
        D_001D9054[0]->a1 = a;
    }
    {
        float b = D_001D9054[0]->a0 + D_001D9054[0]->cur;
        if (b > 3.14159265f)
            b -= 6.28318531f;
        else if (b < -3.14159265f)
            b += 6.28318531f;
        D_001D9054[0]->a0 = b;
    }
    {
        float c = D_001D9054[0]->a2 + D_001D9054[0]->cur;
        if (c > 3.14159265f)
            c -= 6.28318531f;
        else if (c < -3.14159265f)
            c += 6.28318531f;
        D_001D9054[0]->a2 = c;
    }
}
