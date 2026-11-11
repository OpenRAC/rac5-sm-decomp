/* LEVEL_03:0x02E258 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02E220(int a0, int a1);

void func_02E258(void)
{
    func_02E220(1, 0xFFFF);
}
