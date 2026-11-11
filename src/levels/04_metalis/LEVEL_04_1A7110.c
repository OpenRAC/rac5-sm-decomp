/* LEVEL_04:0x1A7110 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1A70D8(int a0, int a1);

void func_1A7110(void)
{
    func_1A70D8(1, 0xFFFF);
}
