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

extern float D_002277CC;
extern float D_00231808[];
extern int func_03B630(Obj *a0);
extern void func_1A95C8(Obj *a0, int a1, int a2);
extern void func_057288(Obj *a0, float f12, float f13);

int func_056620(Obj *a0, int a1, int a2)
{
    float *d;

    if (a1 != 4 && a2 == 3) {
        if (a1 != 1 || a0->w168 != 0)
            return 0;
    }
    if (func_03B630(a0))
        func_1A95C8(a0, 0, 1);
    if (a0->f308 < 0.95f)
        func_057288(a0, D_002277CC, 0.8f);
    d = &a0->f304;
    d[0] = D_00231808[0];
    d[1] = D_00231808[1];
    d[2] = D_00231808[2];
    d[3] = D_00231808[3];
    a0->h102 = 4;
    a0->w168 = 2;
    a0->w134 = 0;
    return 1;
}
