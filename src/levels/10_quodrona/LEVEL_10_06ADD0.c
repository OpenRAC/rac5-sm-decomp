/* LEVEL_10:0x06ADD0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_06AD98(int a0, int a1);

void func_06ADD0(void)
{
    func_06AD98(1, 0xFFFF);
}
