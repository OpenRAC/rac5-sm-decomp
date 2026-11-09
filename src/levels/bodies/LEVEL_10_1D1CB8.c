/* LEVEL_10:0x1D1CB8 -- placement copy of LEVEL_01_1CDA10.c: initialises a global parameter block from defaults when a1 is 0xFFFF. */
extern void *memset(void *p, int c, unsigned int n);
extern float powf(float x, float y);

typedef struct {
    float f0, f4, f8, fC, f10, f14;
    int i18;
    float f1C, f20, f24;
    int pad[7];
} Params;

typedef struct {
    int a, b, c;
    float d;
} Head;

extern Head D_003A1EC8;
extern Params D_003A1ED8;

void func_1D1CB8(int a0, int a1)
{
    Params p;
    Params *dst;

    if (a1 == 0xFFFF && a0 != 0) {
        D_003A1EC8.a = 0;
        D_003A1EC8.b = 0;
        D_003A1EC8.c = 0;
        D_003A1EC8.d = 1.0f;
        dst = &D_003A1ED8;
        memset(&p, 0, sizeof(Params));
        p.f0 = 12.0f;
        p.f4 = 0.5f;
        p.f8 = 0.8f;
        p.fC = 0.3f;
        p.f10 = 1.0f;
        p.f14 = 1.4f;
        p.i18 = 0xFF909090;
        p.f1C = 0.02327106f;
        p.f20 = 0.03490659f;
        p.f24 = powf(0.9f, 1.0f);
        *dst = p;
    }
}
