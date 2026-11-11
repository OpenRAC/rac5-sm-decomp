/* LEVEL_05:0x091468 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_091430(int a0, int a1);

void func_091468(void)
{
    func_091430(1, 0xFFFF);
}
