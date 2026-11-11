/* LEVEL_02:161BE8 -- clears two words of the object, copies the three floats
   of D_0022CDF8 into 0x30, then the next routine runs the two panels. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V3;

extern V3 D_0022CDF8;

void func_0838D8(int a0, int a1, int a2);
void func_037308(int a0);

void func_161BE8(int a0)
{
    V3 *d = (V3 *)(a0 + 0x30);

    *(int *)(a0 + 0x3C) = 0;
    *(int *)(a0 + 0x40) = 0;
    d->f_00 = D_0022CDF8.f_00;
    d->f_04 = D_0022CDF8.f_04;
    d->f_08 = D_0022CDF8.f_08;
}

void func_161C18(int a0)
{
    int *p = *(int **)(a0 + 0x58);

    func_0838D8(a0, (int)p + 0x48, 3);
    func_0838D8(a0, (int)p + 0x54, 4);
    func_037308(*(int *)((int)p + 0x64));
}
