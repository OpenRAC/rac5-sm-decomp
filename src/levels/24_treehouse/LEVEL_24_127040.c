/* LEVEL_24:0x127040 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_127008(int a0, int a1);

void func_127040(void)
{
    func_127008(1, 0xFFFF);
}
