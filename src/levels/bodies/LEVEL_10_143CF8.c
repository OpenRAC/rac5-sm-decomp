typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_0039AD60;
extern Body D_0039AD70;
extern float D_002254E8;
extern Vec12 D_002256F0;
extern void *memset(void *s, int c, unsigned int n);

void func_143CF8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_0039AD60.a = 0;
        D_0039AD60.b = 0;
        D_0039AD60.c = 0;
        D_0039AD60.d = 1.0f;
        memset(&D_0039AD70, 0, 40);
        D_0039AD70.v = D_002256F0;
        D_0039AD70.f0C = 1.25f;
        D_0039AD70.f10 = D_002254E8;
        D_0039AD70.f14 = 0.8000000715255737f;
        D_0039AD70.f18 = 0.7f;
        D_0039AD70.f1C = 0.99215674f;
        D_0039AD70.f20 = -0.125f;
        D_0039AD70.f24 = 1;
    }
}
