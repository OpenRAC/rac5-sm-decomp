/* LEVEL_06:0x12A058 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_12A020(int a0, int a1);

void func_12A058(void)
{
    func_12A020(1, 0xFFFF);
}
