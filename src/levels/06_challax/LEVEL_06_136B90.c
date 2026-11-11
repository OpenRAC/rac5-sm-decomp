typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_0037E5F0;
extern Body D_0037E600;
extern float D_0020A650;
extern Vec12 D_0020A828;
extern void *memset(void *s, int c, unsigned int n);

void func_136B90(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_0037E5F0.a = 0;
        D_0037E5F0.b = 0;
        D_0037E5F0.c = 0;
        D_0037E5F0.d = 1.0f;
        memset(&D_0037E600, 0, 40);
        D_0037E600.v = D_0020A828;
        D_0037E600.f0C = 1.25f;
        D_0037E600.f10 = D_0020A650;
        D_0037E600.f14 = 0.5333333611488342f;
        D_0037E600.f18 = 0.7f;
        D_0037E600.f1C = 0.99215674f;
        D_0037E600.f20 = -0.125f;
        D_0037E600.f25 = 1;
    }
}
