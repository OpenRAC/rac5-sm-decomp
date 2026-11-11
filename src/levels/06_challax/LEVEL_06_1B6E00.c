/* LEVEL_06:0x1B6E00 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1B6DC8(int a0, int a1);

void func_1B6E00(void)
{
    func_1B6DC8(1, 0xFFFF);
}
