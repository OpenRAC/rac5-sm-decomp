/* LEVEL_06:0x02A4D8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02A4A0(int a0, int a1);

void func_02A4D8(void)
{
    func_02A4A0(1, 0xFFFF);
}
