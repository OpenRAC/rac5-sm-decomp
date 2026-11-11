/* LEVEL_16:0x054878 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_054840(int a0, int a1);

void func_054878(void)
{
    func_054840(1, 0xFFFF);
}
