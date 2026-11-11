typedef struct { float f[2]; int flag; } Vec12;
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    Vec12 v;
    float f0C, f10, f14, f18, f1C, f20;
    unsigned char f24;
} Body;

extern Head D_00363BC0;
extern Body D_00363BD0;
extern float D_001F0868;
extern Vec12 D_001F0A70;
extern void *memset(void *s, int c, unsigned int n);

void func_1497A8(void *p, int flag) {
    if (flag == 0xFFFF && p != 0) {
        D_00363BC0.a = 0;
        D_00363BC0.b = 0;
        D_00363BC0.c = 0;
        D_00363BC0.d = 1.0f;
        memset(&D_00363BD0, 0, 40);
        D_00363BD0.v = D_001F0A70;
        D_00363BD0.f0C = 1.25f;
        D_00363BD0.f10 = D_001F0868;
        D_00363BD0.f14 = 0.8000000715255737f;
        D_00363BD0.f18 = 0.7f;
        D_00363BD0.f1C = 0.99215674f;
        D_00363BD0.f20 = -0.125f;
        D_00363BD0.f24 = 1;
    }
}
