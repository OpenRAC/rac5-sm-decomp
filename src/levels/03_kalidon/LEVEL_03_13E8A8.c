typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_003AC6F0;
extern Body D_003AC700;
extern float D_002347D0;
extern Vec12 D_002349A8;
extern void *memset(void *s, int c, unsigned int n);

void func_13E8A8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003AC6F0.a = 0;
        D_003AC6F0.b = 0;
        D_003AC6F0.c = 0;
        D_003AC6F0.d = 1.0f;
        memset(&D_003AC700, 0, 40);
        D_003AC700.v = D_002349A8;
        D_003AC700.f0C = 1.25f;
        D_003AC700.f10 = D_002347D0;
        D_003AC700.f14 = 0.5333333611488342f;
        D_003AC700.f18 = 0.7f;
        D_003AC700.f1C = 0.99215674f;
        D_003AC700.f20 = -0.125f;
        D_003AC700.f25 = 1;
    }
}
