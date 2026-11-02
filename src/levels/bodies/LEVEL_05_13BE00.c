typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_0037D730;
extern Body D_0037D740;
extern float D_0020A6B0;
extern Vec12 D_0020A888;
extern void *memset(void *s, int c, unsigned int n);

void func_13BE00(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_0037D730.a = 0;
        D_0037D730.b = 0;
        D_0037D730.c = 0;
        D_0037D730.d = 1.0f;
        memset(&D_0037D740, 0, 40);
        D_0037D740.v = D_0020A888;
        D_0037D740.f0C = 1.25f;
        D_0037D740.f10 = D_0020A6B0;
        D_0037D740.f14 = 0.5333333611488342f;
        D_0037D740.f18 = 0.7f;
        D_0037D740.f1C = 0.99215674f;
        D_0037D740.f20 = -0.125f;
        D_0037D740.f25 = 1;
    }
}
