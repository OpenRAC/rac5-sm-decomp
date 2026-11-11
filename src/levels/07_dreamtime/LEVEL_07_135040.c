/* LEVEL_07:0x135040 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_135008(int a0, int a1);

void func_135040(void)
{
    func_135008(1, 0xFFFF);
}
