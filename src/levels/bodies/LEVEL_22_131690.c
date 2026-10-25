typedef struct Obj {
    char pad_00[0x58];
    struct Obj *f_58;
    char pad_5C[0x98 - 0x5C];
    int f_98;
    char pad_9C[0xA4 - 0x9C];
    float f_A4;
    char pad_A8[0xAE - 0xA8];
    unsigned char b_AE;
} Obj;

int func_131690(Obj *a0, unsigned char a1, int a2, float f12)
{
    if (a0 == 0 || a1 == 0 || f12 <= 0.0f)
        return 0;

    a0 = a0->f_58;
    if (a0->b_AE == 0)
        goto store;
    if (a0->f_98 < a2)
        goto store;
    if (a0->b_AE != a1)
        return 0;
    if (a0->f_A4 < f12) {
        a0->f_A4 = f12;
        return 1;
    }
    return 0;
store:
    a0->b_AE = a1;
    a0->f_98 = a2;
    a0->f_A4 = f12;
    return 1;
}
