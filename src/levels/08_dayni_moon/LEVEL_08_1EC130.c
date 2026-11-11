/* LEVEL_08:0x1EC130 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1EC0F8(int a0, int a1);

void func_1EC130(void)
{
    func_1EC0F8(1, 0xFFFF);
}
