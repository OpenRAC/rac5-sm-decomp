/* LEVEL_04:0x1F4688 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1F4650(int a0, int a1);

void func_1F4688(void)
{
    func_1F4650(1, 0xFFFF);
}
