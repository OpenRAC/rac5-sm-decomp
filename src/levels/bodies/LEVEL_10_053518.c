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

extern float D_00216DCC;
extern float D_00220E08[];
extern int func_0389F8(Obj *a0);
extern void func_1A7B20(Obj *a0, int a1, int a2);
extern void func_054180(Obj *a0, float f12, float f13);

int func_053518(Obj *a0, int a1, int a2)
{
    float *d;

    if (a1 != 4 && a2 == 3) {
        if (a1 != 1 || a0->w168 != 0)
            return 0;
    }
    if (func_0389F8(a0))
        func_1A7B20(a0, 0, 1);
    if (a0->f308 < 0.95f)
        func_054180(a0, D_00216DCC, 0.8f);
    d = &a0->f304;
    d[0] = D_00220E08[0];
    d[1] = D_00220E08[1];
    d[2] = D_00220E08[2];
    d[3] = D_00220E08[3];
    a0->h102 = 4;
    a0->w168 = 2;
    a0->w134 = 0;
    return 1;
}
