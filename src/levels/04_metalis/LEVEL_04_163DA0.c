/* LEVEL_04:163DA0 -- clears two words of the object, copies the three floats
   of D_002317F8 into 0x30, then the next routine runs the two panels. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V3;

extern V3 D_002317F8;

void func_080468(int a0, int a1, int a2);
void func_0347D0(int a0);

void func_163DA0(int a0)
{
    V3 *d = (V3 *)(a0 + 0x30);

    *(int *)(a0 + 0x3C) = 0;
    *(int *)(a0 + 0x40) = 0;
    d->f_00 = D_002317F8.f_00;
    d->f_04 = D_002317F8.f_04;
    d->f_08 = D_002317F8.f_08;
}

void func_163DD0(int a0)
{
    int *p = *(int **)(a0 + 0x58);

    func_080468(a0, (int)p + 0x48, 3);
    func_080468(a0, (int)p + 0x54, 4);
    func_0347D0(*(int *)((int)p + 0x64));
}
