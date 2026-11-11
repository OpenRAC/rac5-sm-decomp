/* LEVEL_02:0x1A20C8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1A2090(int a0, int a1);

void func_1A20C8(void)
{
    func_1A2090(1, 0xFFFF);
}
