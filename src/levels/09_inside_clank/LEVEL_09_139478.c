typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_00378FF0;
extern Body D_00379000;
extern float D_002053F0;
extern Vec12 D_002055C8;
extern void *memset(void *s, int c, unsigned int n);

void func_139478(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_00378FF0.a = 0;
        D_00378FF0.b = 0;
        D_00378FF0.c = 0;
        D_00378FF0.d = 1.0f;
        memset(&D_00379000, 0, 40);
        D_00379000.v = D_002055C8;
        D_00379000.f0C = 1.25f;
        D_00379000.f10 = D_002053F0;
        D_00379000.f14 = 0.5333333611488342f;
        D_00379000.f18 = 0.7f;
        D_00379000.f1C = 0.99215674f;
        D_00379000.f20 = -0.125f;
        D_00379000.f25 = 1;
    }
}
