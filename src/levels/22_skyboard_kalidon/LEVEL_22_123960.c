/* LEVEL_22:0x123960 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_123928(int a0, int a1);

void func_123960(void)
{
    func_123928(1, 0xFFFF);
}
