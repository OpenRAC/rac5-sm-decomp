/* LEVEL_06:0x070D68 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_070BF8(int a0, int a1);

void func_070D68(void)
{
    func_070BF8(1, 0xFFFF);
}
