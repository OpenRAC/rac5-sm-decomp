typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_00391A20;
extern Body D_00391A30;
extern float D_0021C578;
extern Vec12 D_0021C780;
extern void *memset(void *s, int c, unsigned int n);

void func_1468F8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_00391A20.a = 0;
        D_00391A20.b = 0;
        D_00391A20.c = 0;
        D_00391A20.d = 1.0f;
        memset(&D_00391A30, 0, 40);
        D_00391A30.v = D_0021C780;
        D_00391A30.f0C = 1.25f;
        D_00391A30.f10 = D_0021C578;
        D_00391A30.f14 = 0.8000000715255737f;
        D_00391A30.f18 = 0.7f;
        D_00391A30.f1C = 0.99215674f;
        D_00391A30.f20 = -0.125f;
        D_00391A30.f24 = 1;
    }
}
