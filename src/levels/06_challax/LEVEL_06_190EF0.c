/* LEVEL_06:0x190EF0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_190EB8(int a0, int a1);

void func_190EF0(void)
{
    func_190EB8(1, 0xFFFF);
}
