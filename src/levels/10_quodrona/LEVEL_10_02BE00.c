/* LEVEL_10:0x02BE00 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02BAA0(int a0, int a1);

void func_02BE00(void)
{
    func_02BAA0(1, 0xFFFF);
}
