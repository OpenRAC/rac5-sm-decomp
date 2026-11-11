/* LEVEL_22:0x123888 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_123850(int a0, int a1);

void func_123888(void)
{
    func_123850(1, 0xFFFF);
}
