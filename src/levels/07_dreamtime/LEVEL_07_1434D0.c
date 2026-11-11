typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_003A7170;
extern Body D_003A7180;
extern float D_002305D0;
extern Vec12 D_002307A8;
extern void *memset(void *s, int c, unsigned int n);

void func_1434D0(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_003A7170.a = 0;
        D_003A7170.b = 0;
        D_003A7170.c = 0;
        D_003A7170.d = 1.0f;
        memset(&D_003A7180, 0, 40);
        D_003A7180.v = D_002307A8;
        D_003A7180.f0C = 1.25f;
        D_003A7180.f10 = D_002305D0;
        D_003A7180.f14 = 0.5333333611488342f;
        D_003A7180.f18 = 0.7f;
        D_003A7180.f1C = 0.99215674f;
        D_003A7180.f20 = -0.125f;
        D_003A7180.f25 = 1;
    }
}
