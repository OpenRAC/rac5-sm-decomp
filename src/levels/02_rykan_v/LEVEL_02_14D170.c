typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_003A8F40;
extern Body D_003A8F50;
extern float D_00231848;
extern Vec12 D_00231A50;
extern void *memset(void *s, int c, unsigned int n);

void func_14D170(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003A8F40.a = 0;
        D_003A8F40.b = 0;
        D_003A8F40.c = 0;
        D_003A8F40.d = 1.0f;
        memset(&D_003A8F50, 0, 40);
        D_003A8F50.v = D_00231A50;
        D_003A8F50.f0C = 1.25f;
        D_003A8F50.f10 = D_00231848;
        D_003A8F50.f14 = 0.8000000715255737f;
        D_003A8F50.f18 = 0.7f;
        D_003A8F50.f1C = 0.99215674f;
        D_003A8F50.f20 = -0.125f;
        D_003A8F50.f24 = 1;
    }
}
