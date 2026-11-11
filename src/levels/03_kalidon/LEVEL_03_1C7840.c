/* LEVEL_03:0x1C7840 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1C7808(int a0, int a1);

void func_1C7840(void)
{
    func_1C7808(1, 0xFFFF);
}
