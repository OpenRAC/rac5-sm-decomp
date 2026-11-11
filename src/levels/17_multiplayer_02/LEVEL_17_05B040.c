/* LEVEL_17:0x05B040 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_05B008(int a0, int a1);

void func_05B040(void)
{
    func_05B008(1, 0xFFFF);
}
