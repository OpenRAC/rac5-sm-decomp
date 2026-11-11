/* LEVEL_15:0x045EF0 -- etat "arme" : recopie le pivot et le drapeau. */
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

extern float D_001625CC;
extern float D_0016C608[];
extern int func_02E8B0(Obj *a0);
extern void func_0F4E98(Obj *a0, int a1, int a2);
extern void func_046B58(Obj *a0, float f12, float f13);

int func_045EF0(Obj *a0, int a1, int a2)
{
    float *d;

    if (a1 != 4 && a2 == 3) {
        if (a1 != 1 || a0->w168 != 0)
            return 0;
    }
    if (func_02E8B0(a0))
        func_0F4E98(a0, 0, 1);
    if (a0->f308 < 0.95f)
        func_046B58(a0, D_001625CC, 0.8f);
    d = &a0->f304;
    d[0] = D_0016C608[0];
    d[1] = D_0016C608[1];
    d[2] = D_0016C608[2];
    d[3] = D_0016C608[3];
    a0->h102 = 4;
    a0->w168 = 2;
    a0->w134 = 0;
    return 1;
}
