/* LEVEL_04:0x06C980 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_06C920(int a0, int a1);

void func_06C980(void)
{
    func_06C920(1, 0xFFFF);
}
