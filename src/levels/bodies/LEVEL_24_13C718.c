typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_0035D8A0;
extern Body D_0035D8B0;
extern float D_001ED2D8;
extern Vec12 D_001ED4E0;
extern void *memset(void *s, int c, unsigned int n);

void func_13C718(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_0035D8A0.a = 0;
        D_0035D8A0.b = 0;
        D_0035D8A0.c = 0;
        D_0035D8A0.d = 1.0f;
        memset(&D_0035D8B0, 0, 40);
        D_0035D8B0.v = D_001ED4E0;
        D_0035D8B0.f0C = 1.25f;
        D_0035D8B0.f10 = D_001ED2D8;
        D_0035D8B0.f14 = 0.8000000715255737f;
        D_0035D8B0.f18 = 0.7f;
        D_0035D8B0.f1C = 0.99215674f;
        D_0035D8B0.f20 = -0.125f;
        D_0035D8B0.f24 = 1;
    }
}
