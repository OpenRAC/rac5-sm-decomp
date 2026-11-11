/* LEVEL_24:0x176C88 -- placement copy of LEVEL_01_195450.c: blends two packed colors with a random weight, applies it and decays the timer. */
typedef struct {
    unsigned int color;
    float rate;
    float timer;
    char pad0C[4];
} Fx;

extern unsigned int D_001F21A8[];
extern unsigned int D_001F21B0[];
extern int rand(void);
extern void func_085D50(float t, char *p, unsigned int color);

void func_176C88(Fx *fx, int idx)
{
    unsigned int *p0;
    unsigned int *p1;
    unsigned int c0;
    unsigned int c1;
    unsigned int r0, r1, r2, r3;
    float w;
    float iw;
    int b;
    unsigned int col;

    if (0.01f < fx->timer) {
        p0 = &D_001F21A8[idx];
        p1 = &D_001F21B0[idx];
        b = (rand() >> 30) != 0;
        w = (float)b;
        iw = 1.0f - w;
        c0 = *p0;
        c1 = *p1;
        r0 = (int)((float)(c0 & 0xFF) * iw + (float)(c1 & 0xFF) * w);
        r1 = (int)((float)((c0 >> 8) & 0xFF) * iw + (float)((c1 >> 8) & 0xFF) * w);
        r2 = (int)((float)((c0 >> 16) & 0xFF) * iw + (float)((c1 >> 16) & 0xFF) * w);
        r3 = (int)((float)((c0 >> 24) & 0xFF) * iw + (float)((c1 >> 24) & 0xFF) * w);
        col = r3 << 24 | r2 << 16;
        col |= r1 << 8;
        fx->color = col | r0;
        func_085D50(fx->timer, (char *)fx + 0xC, fx->color);
        fx->timer = fx->timer - fx->rate;
        if (fx->timer < 0.0f)
            fx->timer = 0.0f;
    }
}
