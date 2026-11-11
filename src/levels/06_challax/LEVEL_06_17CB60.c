/* LEVEL_06:0x17CB60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_17CB28(int a0, int a1);

void func_17CB60(void)
{
    func_17CB28(1, 0xFFFF);
}
