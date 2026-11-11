/* LEVEL_01:0x02E468 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02E430(int a0, int a1);

void func_02E468(void)
{
    func_02E430(1, 0xFFFF);
}
