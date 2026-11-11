typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_003E0AF0;
extern Body D_003E0B00;
extern float D_002656D0;
extern Vec12 D_002658A8;
extern void *memset(void *s, int c, unsigned int n);

void func_151940(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003E0AF0.a = 0;
        D_003E0AF0.b = 0;
        D_003E0AF0.c = 0;
        D_003E0AF0.d = 1.0f;
        memset(&D_003E0B00, 0, 40);
        D_003E0B00.v = D_002658A8;
        D_003E0B00.f0C = 1.25f;
        D_003E0B00.f10 = D_002656D0;
        D_003E0B00.f14 = 0.5333333611488342f;
        D_003E0B00.f18 = 0.7f;
        D_003E0B00.f1C = 0.99215674f;
        D_003E0B00.f20 = -0.125f;
        D_003E0B00.f25 = 1;
    }
}
