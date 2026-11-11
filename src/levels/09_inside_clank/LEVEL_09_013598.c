/* LEVEL_09:0x013598 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_013560(int a0, int a1);

void func_013598(void)
{
    func_013560(1, 0xFFFF);
}
