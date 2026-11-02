typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_002E2CC8;
extern Body D_002E2CD8;
extern float D_001D20D8;
extern Vec12 D_001D22E0;
extern void *memset(void *s, int c, unsigned int n);

void func_12C278(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_002E2CC8.a = 0;
        D_002E2CC8.b = 0;
        D_002E2CC8.c = 0;
        D_002E2CC8.d = 1.0f;
        memset(&D_002E2CD8, 0, 40);
        D_002E2CD8.v = D_001D22E0;
        D_002E2CD8.f0C = 1.25f;
        D_002E2CD8.f10 = D_001D20D8;
        D_002E2CD8.f14 = 0.8000000715255737f;
        D_002E2CD8.f18 = 0.7f;
        D_002E2CD8.f1C = 0.99215674f;
        D_002E2CD8.f20 = -0.125f;
        D_002E2CD8.f24 = 1;
    }
}
