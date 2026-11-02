typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_00362DB0;
extern Body D_00362DC0;
extern float D_001EE860;
extern Vec12 D_001EEA38;
extern void *memset(void *s, int c, unsigned int n);

void func_131BE0(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_00362DB0.a = 0;
        D_00362DB0.b = 0;
        D_00362DB0.c = 0;
        D_00362DB0.d = 1.0f;
        memset(&D_00362DC0, 0, 40);
        D_00362DC0.v = D_001EEA38;
        D_00362DC0.f0C = 1.25f;
        D_00362DC0.f10 = D_001EE860;
        D_00362DC0.f14 = 0.5333333611488342f;
        D_00362DC0.f18 = 0.7f;
        D_00362DC0.f1C = 0.99215674f;
        D_00362DC0.f20 = -0.125f;
        D_00362DC0.f25 = 1;
    }
}
