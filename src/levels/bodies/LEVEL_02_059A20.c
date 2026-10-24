typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V;

typedef struct {
    char pad0[0x102];
    unsigned short h102;
    char pad1[0x108 - 0x104];
    unsigned short h108;
    char pad2[0x304 - 0x10A];
    float f304;
    float f308;
    float f30C;
    float f310;
} S;

extern V D_0022CE08;

void func_06FAD8(S *s, int v);
int func_03EA90(S *s);
void func_1B83E0(S *s, int a, int b);

void func_059A20(S *s)
{
    float *d;

    if (s->h108 == 9) {
        func_06FAD8(s, 0);
    }
    if (func_03EA90(s)) {
        func_1B83E0(s, 0, 1);
    }
    if (!((unsigned)(s->h102 - 0x28) < 12)) {
        d = &s->f304;
        d[0] = D_0022CE08.f00;
        d[1] = D_0022CE08.f04;
        d[2] = D_0022CE08.f08;
        d[3] = D_0022CE08.f0C;
    }
}
