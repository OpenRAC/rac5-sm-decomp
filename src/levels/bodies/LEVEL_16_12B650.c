typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_002E2B38;
extern Body D_002E2B48;
extern float D_001D0DD8;
extern Vec12 D_001D0FE0;
extern void *memset(void *s, int c, unsigned int n);

void func_12B650(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_002E2B38.a = 0;
        D_002E2B38.b = 0;
        D_002E2B38.c = 0;
        D_002E2B38.d = 1.0f;
        memset(&D_002E2B48, 0, 40);
        D_002E2B48.v = D_001D0FE0;
        D_002E2B48.f0C = 1.25f;
        D_002E2B48.f10 = D_001D0DD8;
        D_002E2B48.f14 = 0.8000000715255737f;
        D_002E2B48.f18 = 0.7f;
        D_002E2B48.f1C = 0.99215674f;
        D_002E2B48.f20 = -0.125f;
        D_002E2B48.f24 = 1;
    }
}
