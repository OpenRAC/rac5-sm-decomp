typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_0037D8E0;
extern Body D_0037D8F0;
extern float D_0020B3C8;
extern Vec12 D_0020B5D0;
extern void *memset(void *s, int c, unsigned int n);

void func_1422E8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_0037D8E0.a = 0;
        D_0037D8E0.b = 0;
        D_0037D8E0.c = 0;
        D_0037D8E0.d = 1.0f;
        memset(&D_0037D8F0, 0, 40);
        D_0037D8F0.v = D_0020B5D0;
        D_0037D8F0.f0C = 1.25f;
        D_0037D8F0.f10 = D_0020B3C8;
        D_0037D8F0.f14 = 0.8000000715255737f;
        D_0037D8F0.f18 = 0.7f;
        D_0037D8F0.f1C = 0.99215674f;
        D_0037D8F0.f20 = -0.125f;
        D_0037D8F0.f24 = 1;
    }
}
