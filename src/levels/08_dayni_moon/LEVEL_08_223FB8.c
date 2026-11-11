/* LEVEL_08:0x223FB8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_223F80(int a0, int a1);

void func_223FB8(void)
{
    func_223F80(1, 0xFFFF);
}
