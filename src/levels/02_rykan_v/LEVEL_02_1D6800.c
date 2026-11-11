/* LEVEL_02:0x1D6800 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1D67C8(int a0, int a1);

void func_1D6800(void)
{
    func_1D67C8(1, 0xFFFF);
}
