/* LEVEL_03:0x01BCD8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01BCA0(int a0, int a1);

void func_01BCD8(void)
{
    func_01BCA0(1, 0xFFFF);
}
