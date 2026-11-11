typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_0035D730;
extern Body D_0035D740;
extern float D_001EC4F0;
extern Vec12 D_001EC6C8;
extern void *memset(void *s, int c, unsigned int n);

void func_135F78(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_0035D730.a = 0;
        D_0035D730.b = 0;
        D_0035D730.c = 0;
        D_0035D730.d = 1.0f;
        memset(&D_0035D740, 0, 40);
        D_0035D740.v = D_001EC6C8;
        D_0035D740.f0C = 1.25f;
        D_0035D740.f10 = D_001EC4F0;
        D_0035D740.f14 = 0.5333333611488342f;
        D_0035D740.f18 = 0.7f;
        D_0035D740.f1C = 0.99215674f;
        D_0035D740.f20 = -0.125f;
        D_0035D740.f25 = 1;
    }
}
