/* LEVEL_07:0x1D0318 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1D02E0(int a0, int a1);

void func_1D0318(void)
{
    func_1D02E0(1, 0xFFFF);
}
