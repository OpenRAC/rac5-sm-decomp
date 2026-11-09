/* LEVEL_07:0x1D9FF0 -- placement copy of LEVEL_01_1CDA10.c: initialises a global parameter block from defaults when a1 is 0xFFFF. */
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

extern Head D_003AE1B0;
extern Params D_003AE1C0;

void func_1D9FF0(int a0, int a1)
{
    Params p;
    Params *dst;

    if (a1 == 0xFFFF && a0 != 0) {
        D_003AE1B0.a = 0;
        D_003AE1B0.b = 0;
        D_003AE1B0.c = 0;
        D_003AE1B0.d = 1.0f;
        dst = &D_003AE1C0;
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
