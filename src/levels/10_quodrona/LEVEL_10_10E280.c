/* LEVEL_10:0x10E280 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10E248(int a0, int a1);

void func_10E280(void)
{
    func_10E248(1, 0xFFFF);
}
