typedef struct {
    char pad0[0x3C];
    int f_3C;
    char pad1[0x48 - 0x40];
    int f_48;
    char pad2[0x54 - 0x4C];
    float f_54;
    float f_58;
    float f_5C;
    char pad3[0x254 - 0x60];
    float f_254;
    float f_258;
    float f_25C;
    char pad4[0x274 - 0x260];
    int f_274;
} Obj;

extern char D_002F3D98[];

void func_0EB9C8(void *a0, void *a1, void *a2, void *a3, void *a4);

void func_1048B0(Obj *a0)
{
    float *p = &a0->f_254;
    char *g = D_002F3D98;
    float *d;

    a0->f_274 = 0;
    func_0EB9C8(&a0->f_3C, &a0->f_48, p, g + 0xC, &a0->f_3C);
    a0->f_54 = p[0];
    d = &a0->f_54;
    d[1] = p[1];
    d[2] = p[2];
}
