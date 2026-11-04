typedef struct {
    char pad_00[0x102];
    short h102;
    char pad_104[0x30];
    int w134;
    char pad_138[0x30];
    int w168;
    char pad_16C[0x198];
    float f304, f308, f30C, f310;
} Obj;

extern float D_001DEBCC;
extern float D_001E8C08[];
extern int func_0330E0(Obj *a0);
extern void func_17C0B8(Obj *a0, int a1, int a2);
extern void func_04EA08(Obj *a0, float f12, float f13);

int func_04DDA0(Obj *a0, int a1, int a2)
{
    float *d;

    if (a1 != 4 && a2 == 3) {
        if (a1 != 1 || a0->w168 != 0)
            return 0;
    }
    if (func_0330E0(a0))
        func_17C0B8(a0, 0, 1);
    if (a0->f308 < 0.95f)
        func_04EA08(a0, D_001DEBCC, 0.8f);
    d = &a0->f304;
    d[0] = D_001E8C08[0];
    d[1] = D_001E8C08[1];
    d[2] = D_001E8C08[2];
    d[3] = D_001E8C08[3];
    a0->h102 = 4;
    a0->w168 = 2;
    a0->w134 = 0;
    return 1;
}
