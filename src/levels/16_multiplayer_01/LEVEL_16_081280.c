/* LEVEL_16:0x081280 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_081248(int a0, int a1);

void func_081280(void)
{
    func_081248(1, 0xFFFF);
}
