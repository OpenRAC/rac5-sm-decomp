/* LEVEL_06:0x0189D0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_018998(int a0, int a1);

void func_0189D0(void)
{
    func_018998(1, 0xFFFF);
}
