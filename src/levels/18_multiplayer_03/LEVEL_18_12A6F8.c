typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_002E2EB8;
extern Body D_002E2EC8;
extern float D_001D2328;
extern Vec12 D_001D2530;
extern void *memset(void *s, int c, unsigned int n);

void func_12A6F8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_002E2EB8.a = 0;
        D_002E2EB8.b = 0;
        D_002E2EB8.c = 0;
        D_002E2EB8.d = 1.0f;
        memset(&D_002E2EC8, 0, 40);
        D_002E2EC8.v = D_001D2530;
        D_002E2EC8.f0C = 1.25f;
        D_002E2EC8.f10 = D_001D2328;
        D_002E2EC8.f14 = 0.8000000715255737f;
        D_002E2EC8.f18 = 0.7f;
        D_002E2EC8.f1C = 0.99215674f;
        D_002E2EC8.f20 = -0.125f;
        D_002E2EC8.f24 = 1;
    }
}
