/* LEVEL_22:0x10B058 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10B020(int a0, int a1);

void func_10B058(void)
{
    func_10B020(1, 0xFFFF);
}
