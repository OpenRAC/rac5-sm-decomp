/* LEVEL_03:0x150600 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1505C8(int a0, int a1);

void func_150600(void)
{
    func_1505C8(1, 0xFFFF);
}
