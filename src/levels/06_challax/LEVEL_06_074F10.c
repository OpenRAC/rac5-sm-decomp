/* LEVEL_06:0x074F10 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_074ED8(int a0, int a1);

void func_074F10(void)
{
    func_074ED8(1, 0xFFFF);
}
