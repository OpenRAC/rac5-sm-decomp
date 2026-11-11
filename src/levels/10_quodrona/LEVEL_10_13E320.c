typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_0039AC70;
extern Body D_0039AC80;
extern float D_00224830;
extern Vec12 D_00224A08;
extern void *memset(void *s, int c, unsigned int n);

void func_13E320(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_0039AC70.a = 0;
        D_0039AC70.b = 0;
        D_0039AC70.c = 0;
        D_0039AC70.d = 1.0f;
        memset(&D_0039AC80, 0, 40);
        D_0039AC80.v = D_00224A08;
        D_0039AC80.f0C = 1.25f;
        D_0039AC80.f10 = D_00224830;
        D_0039AC80.f14 = 0.5333333611488342f;
        D_0039AC80.f18 = 0.7f;
        D_0039AC80.f1C = 0.99215674f;
        D_0039AC80.f20 = -0.125f;
        D_0039AC80.f25 = 1;
    }
}
