/* LEVEL_17:0x16B320 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16ADD0(int a0, int a1);

void func_16B320(void)
{
    func_16ADD0(1, 0xFFFF);
}
