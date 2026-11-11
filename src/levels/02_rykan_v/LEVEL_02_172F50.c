/* LEVEL_02:0x172F50 -- placement copy of LEVEL_01_15ECD8.c: on the 0xFFFF event resets one record and loads a default parameter block. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} R;
typedef struct {
    float f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24, f28, f2C, f30, f34, f38, f3C;
    int i40, i44, i48, i4C;
} P;
extern R D_003AB730;
extern P D_003AB740;
extern float powf(float x, float y);
extern void *memset(void *s, int c, unsigned n);

void func_172F50(int a, int b)
{
    P p;
    P *dst;

    if (b == 0xFFFF && a != 0) {
        D_003AB730.a = 0;
        D_003AB730.b = 0;
        D_003AB730.c = 0;
        D_003AB730.d = 1.0f;
        dst = &D_003AB740;
        memset(&p, 0, sizeof(P));
        p.f4 = powf(0.97f, 1.0f);
        p.fC = 0.100000009f;
        p.f10 = 0.166666672f;
        p.f14 = 0.25f;
        p.f18 = 0.699999988f;
        p.f1C = 1.0f;
        p.f20 = 1.5f;
        p.f24 = -0.104719765f;
        p.f28 = 0.104719765f;
        p.f34 = 45.0f;
        p.f38 = 60.0f;
        p.f3C = 0.5f;
        p.i40 = 0x6085A8C5;
        p.i44 = 0x805F769B;
        p.i48 = 20;
        p.i4C = 30;
        *dst = p;
    }
}
