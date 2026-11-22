/* LEVEL_05:0x1AEF88 -- placement copy of LEVEL_02_1D2F18.c: when the reset request arrives with the all-ones id, restores the global orientation to identity and rebuilds the global tuning record from its defaults (the second entry is a pow of the base decay). */
extern void *memset(void *s, int c, unsigned int n);
extern float powf(float x, float y);

typedef struct Cfg {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    int c40;
    int c44;
    int c48;
    int c4C;
} Cfg;

extern float D_0038F7B0[4];
extern Cfg D_0038F7C0;

void func_1AEF88(void *p, int id)
{
    Cfg c;
    Cfg *dst;

    if (id == 0xFFFF && p != 0) {
        D_0038F7B0[0] = 0.0f;
        D_0038F7B0[1] = 0.0f;
        D_0038F7B0[2] = 0.0f;
        D_0038F7B0[3] = 1.0f;
        dst = &D_0038F7C0;
        memset(&c, 0, sizeof(c));
        c.f00 = 0.016666668f;
        c.f04 = powf(0.97f, 1.0f);
        c.f08 = 0.3f;
        c.f0C = 0.10000001f;
        c.f10 = 0.20000002f;
        c.f14 = 0.1f;
        c.f18 = 0.3f;
        c.f1C = 0.75f;
        c.f20 = 1.0f;
        c.f24 = 0.104719765f;
        c.f28 = 0.20943953f;
        c.f34 = 15.0f;
        c.f38 = 22.5f;
        c.f3C = 0.3f;
        c.c40 = 0xFF74A8F1;
        c.c44 = 0xFF7694BE;
        c.c48 = 1;
        c.c4C = 2;
        *dst = c;
    }
}
