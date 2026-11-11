/* LEVEL_10:0x1A1030 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1A0FF8(int a0, int a1);

void func_1A1030(void)
{
    func_1A0FF8(1, 0xFFFF);
}
