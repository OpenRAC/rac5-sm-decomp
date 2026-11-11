typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_003AC1E0;
extern Body D_003AC1F0;
extern float D_00236048;
extern Vec12 D_00236250;
extern void *memset(void *s, int c, unsigned int n);

void func_153048(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003AC1E0.a = 0;
        D_003AC1E0.b = 0;
        D_003AC1E0.c = 0;
        D_003AC1E0.d = 1.0f;
        memset(&D_003AC1F0, 0, 40);
        D_003AC1F0.v = D_00236250;
        D_003AC1F0.f0C = 1.25f;
        D_003AC1F0.f10 = D_00236048;
        D_003AC1F0.f14 = 0.8000000715255737f;
        D_003AC1F0.f18 = 0.7f;
        D_003AC1F0.f1C = 0.99215674f;
        D_003AC1F0.f20 = -0.125f;
        D_003AC1F0.f24 = 1;
    }
}
