/* LEVEL_03:0x07B040 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_07B008(int a0, int a1);

void func_07B040(void)
{
    func_07B008(1, 0xFFFF);
}
