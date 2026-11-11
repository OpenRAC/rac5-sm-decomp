/* LEVEL_20:062288 -- hands the three floats at 0x30 of the first argument,
   with the second argument, to func_0DCCC0. */
void func_0DCCC0(int a0, float f12, float f13, float f14);

void func_062288(int a0, int a1)
{
    func_0DCCC0(a1, *(float *)(a0 + 0x30), *(float *)(a0 + 0x34),
                *(float *)(a0 + 0x38));
}
