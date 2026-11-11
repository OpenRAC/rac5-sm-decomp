typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_003E0D30;
extern Body D_003E0D40;
extern float D_00266668;
extern Vec12 D_00266870;
extern void *memset(void *s, int c, unsigned int n);

void func_158D78(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003E0D30.a = 0;
        D_003E0D30.b = 0;
        D_003E0D30.c = 0;
        D_003E0D30.d = 1.0f;
        memset(&D_003E0D40, 0, 40);
        D_003E0D40.v = D_00266870;
        D_003E0D40.f0C = 1.25f;
        D_003E0D40.f10 = D_00266668;
        D_003E0D40.f14 = 0.8000000715255737f;
        D_003E0D40.f18 = 0.7f;
        D_003E0D40.f1C = 0.99215674f;
        D_003E0D40.f20 = -0.125f;
        D_003E0D40.f24 = 1;
    }
}
