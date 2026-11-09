/* LEVEL_04:0x1D8FF8 -- fills two global tuning records with default values. */
typedef struct {
    float f00, f04, f08, f0C, f10, f14, f18, f1C;
    int w20;
    float f24;
    unsigned int w28;
    float f2C, f30;
    unsigned char b34;
    char pad35[3];
} Cfg1;

typedef struct {
    unsigned int c00, c04, c08, c0C;
    int w10, w14;
    float f18, f1C, f20, f24, f28, f2C, f30, f34, f38, f3C;
} Cfg2;

typedef struct {
    int w0, w4, w8;
    float fC;
} Quat;

extern Quat D_003B3BF0;
extern Cfg1 D_003B3C00;
extern Cfg2 D_003B3C38;

extern void *memset(void *p, int c, unsigned int n);
extern float powf(float x, float y);

void func_1D8FF8(int a, int b)
{
    Cfg1 c1;
    Cfg2 c2;
    Cfg1 *p1;
    Cfg2 *p2;

    if (b == 0xFFFF && a) {
        p1 = &D_003B3C00;
        p2 = &D_003B3C38;
        D_003B3BF0.w0 = 0;
        D_003B3BF0.w4 = 0;
        D_003B3BF0.w8 = 0;
        D_003B3BF0.fC = 1.0f;
        memset(&c1, 0, sizeof(c1));
        c1.f00 = 0.05f;
        c1.f04 = 0.1f;
        c1.f08 = 0.1f;
        c1.f0C = 0.15f;
        c1.f10 = 6.0f;
        c1.f14 = 12.0f;
        c1.f18 = 0.05000000447034836f;
        c1.f1C = 0.11666667461395264f;
        c1.f24 = 0.10471976548433304f;
        c1.w28 = 0xFFFFFFFFu;
        c1.f2C = powf(0.9f, 1.0f);
        c1.f30 = powf(1.0f, 1.0f);
        c1.b34 = 1;
        *p1 = c1;
        memset(&c2, 0, sizeof(c2));
        c2.c00 = 0xAA333333;
        c2.c04 = 0xBB444444;
        c2.c08 = 0x00666666;
        c2.c0C = 0x00888888;
        c2.w10 = 15;
        c2.w14 = 30;
        c2.f18 = 0.016666668f;
        c2.f1C = 0.05000000447034836f;
        c2.f20 = 0.02f;
        c2.f24 = 0.08f;
        c2.f28 = 0.15f;
        c2.f2C = 0.3f;
        c2.f30 = 0.05235988274216652f;
        c2.f34 = 0.10471976548433304f;
        c2.f38 = powf(0.99f, 1.0f);
        c2.f3C = powf(0.995f, 1.0f);
        *p2 = c2;
    }
}
