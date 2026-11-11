/* LEVEL_04:0x1BC320 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1BC2E8(int a0, int a1);

void func_1BC320(void)
{
    func_1BC2E8(1, 0xFFFF);
}
