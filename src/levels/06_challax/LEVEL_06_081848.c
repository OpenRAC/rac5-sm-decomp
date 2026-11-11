/* LEVEL_06:0x081848 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_081810(int a0, int a1);

void func_081848(void)
{
    func_081810(1, 0xFFFF);
}
