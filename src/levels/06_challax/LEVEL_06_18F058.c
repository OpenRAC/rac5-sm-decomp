/* LEVEL_06:0x18F058 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_18F020(int a0, int a1);

void func_18F058(void)
{
    func_18F020(1, 0xFFFF);
}
