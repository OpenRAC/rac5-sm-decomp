/* LEVEL_21:0x021040 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_021008(int a0, int a1);

void func_021040(void)
{
    func_021008(1, 0xFFFF);
}
