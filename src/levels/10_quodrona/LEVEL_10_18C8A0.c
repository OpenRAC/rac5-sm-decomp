/* LEVEL_10:0x18C8A0 -- resets the effect globals and loads the default parameter block. */
typedef struct G {
    int f0;
    int f4;
    int f8;
    float fC;
} G;

typedef struct Params {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    int f28;
    float f2C;
    float f30;
    float f34;
} Params;

extern G D_003A0018;
extern Params D_003A0028;
extern void *memset(void *p, int c, unsigned n);
extern float powf(float x, float y);

void func_18C8A0(int a, int b)
{
    Params p;
    Params *d;

    if (b == 0xFFFF && a != 0) {
        D_003A0018.f0 = 0;
        D_003A0018.f4 = 0;
        D_003A0018.f8 = 0;
        D_003A0018.fC = 1.0f;
        d = &D_003A0028;
        memset(&p, 0, sizeof(p));
        p.f0 = 0.30000001192092896f;
        p.f4 = 0.4000000059604645f;
        p.f8 = 0.6000000238418579f;
        p.fC = 0.800000011920929f;
        p.f10 = 45.0f;
        p.f14 = 60.0f;
        p.f18 = 0.10000000894069672f;
        p.f1C = 0.15000000596046448f;
        p.f20 = 0.0016666669398546219f;
        p.f24 = 0.10471976548433304f;
        p.f28 = 0x7F7F7F7F;
        p.f2C = powf(0.8500000238418579f, 1.0f);
        p.f30 = powf(0.8700000047683716f, 1.0f);
        *d = p;
    }
}
