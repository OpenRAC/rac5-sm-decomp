/* LEVEL_03:0x011DD0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_011D98(int a0, int a1);

void func_011DD0(void)
{
    func_011D98(1, 0xFFFF);
}
