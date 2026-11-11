/* LEVEL_23:0x140158 -- initialises the default effect parameter block when no slot is selected. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    float f0, f4, f8, fC;
    float f10, f14, f18, f1C;
    float f20, f24, f28, f2C;
    float f30, f34, f38, f3C;
    unsigned c40, c44;
    int i48, i4C;
} Cfg;

extern Vec4 D_003635B8;
extern Cfg D_003635C8;

extern void *memset(void *p, int c, unsigned n);
extern float powf(float x, float y);

void func_140158(void *a, int b)
{
    Cfg t;
    Cfg *d;

    if (b == 0xFFFF && a) {
        d = &D_003635C8;
        D_003635B8.x = 0.0f;
        D_003635B8.y = 0.0f;
        D_003635B8.z = 0.0f;
        D_003635B8.w = 1.0f;
        memset(&t, 0, sizeof(t));
        t.f0 = 0.0015000001294538379f;
        t.f4 = powf(0.9f, 1.0f);
        t.f14 = 0.7f;
        t.f18 = 0.8f;
        t.f1C = 0.4f;
        t.f20 = 0.5f;
        t.f28 = 1.15f;
        t.f34 = 60.0f;
        t.f38 = 75.0f;
        t.f3C = 0.95f;
        t.c40 = 0x804040FF;
        t.c44 = 0xFF6060A0;
        t.i48 = 1;
        t.i4C = 1;
        *d = t;
    }
}
