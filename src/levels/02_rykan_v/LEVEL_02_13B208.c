/* LEVEL_02:0x13B208 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_13B1D0(int a0, int a1);

void func_13B208(void)
{
    func_13B1D0(1, 0xFFFF);
}
