/* LEVEL_02:0x1A6058 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1A6020(int a0, int a1);

void func_1A6058(void)
{
    func_1A6020(1, 0xFFFF);
}
