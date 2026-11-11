/* LEVEL_06:0x193040 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_193008(int a0, int a1);

void func_193040(void)
{
    func_193008(1, 0xFFFF);
}
