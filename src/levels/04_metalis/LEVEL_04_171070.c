/* LEVEL_04:0x171070 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_171038(int a0, int a1);

void func_171070(void)
{
    func_171038(1, 0xFFFF);
}
