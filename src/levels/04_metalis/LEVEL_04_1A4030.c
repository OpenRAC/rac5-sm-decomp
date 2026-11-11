/* LEVEL_04:0x1A4030 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1A3FF8(int a0, int a1);

void func_1A4030(void)
{
    func_1A3FF8(1, 0xFFFF);
}
