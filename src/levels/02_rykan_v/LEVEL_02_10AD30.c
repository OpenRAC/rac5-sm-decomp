/* LEVEL_02:0x10AD30 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10ACF8(int a0, int a1);

void func_10AD30(void)
{
    func_10ACF8(1, 0xFFFF);
}
