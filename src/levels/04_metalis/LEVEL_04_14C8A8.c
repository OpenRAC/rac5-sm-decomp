typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_003AC070;
extern Body D_003AC080;
extern float D_00235260;
extern Vec12 D_00235438;
extern void *memset(void *s, int c, unsigned int n);

void func_14C8A8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003AC070.a = 0;
        D_003AC070.b = 0;
        D_003AC070.c = 0;
        D_003AC070.d = 1.0f;
        memset(&D_003AC080, 0, 40);
        D_003AC080.v = D_00235438;
        D_003AC080.f0C = 1.25f;
        D_003AC080.f10 = D_00235260;
        D_003AC080.f14 = 0.5333333611488342f;
        D_003AC080.f18 = 0.7f;
        D_003AC080.f1C = 0.99215674f;
        D_003AC080.f20 = -0.125f;
        D_003AC080.f25 = 1;
    }
}
