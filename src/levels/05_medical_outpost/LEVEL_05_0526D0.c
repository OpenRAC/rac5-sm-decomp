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

extern V D_00206D88;

void func_0686A8(S *s, int v);
int func_037CF8(S *s);
void func_19BD18(S *s, int a, int b);

void func_0526D0(S *s)
{
    float *d;

    if (s->h108 == 9) {
        func_0686A8(s, 0);
    }
    if (func_037CF8(s)) {
        func_19BD18(s, 0, 1);
    }
    if (!((unsigned)(s->h102 - 0x28) < 12)) {
        d = &s->f304;
        d[0] = D_00206D88.f00;
        d[1] = D_00206D88.f04;
        d[2] = D_00206D88.f08;
        d[3] = D_00206D88.f0C;
    }
}
