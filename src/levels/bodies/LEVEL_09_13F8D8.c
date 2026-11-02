typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_003791A0;
extern Body D_003791B0;
extern float D_00206108;
extern Vec12 D_00206310;
extern void *memset(void *s, int c, unsigned int n);

void func_13F8D8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003791A0.a = 0;
        D_003791A0.b = 0;
        D_003791A0.c = 0;
        D_003791A0.d = 1.0f;
        memset(&D_003791B0, 0, 40);
        D_003791B0.v = D_00206310;
        D_003791B0.f0C = 1.25f;
        D_003791B0.f10 = D_00206108;
        D_003791B0.f14 = 0.8000000715255737f;
        D_003791B0.f18 = 0.7f;
        D_003791B0.f1C = 0.99215674f;
        D_003791B0.f20 = -0.125f;
        D_003791B0.f24 = 1;
    }
}
