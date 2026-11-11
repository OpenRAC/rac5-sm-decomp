/* LEVEL_06:0x01A770 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01A738(int a0, int a1);

void func_01A770(void)
{
    func_01A738(1, 0xFFFF);
}
