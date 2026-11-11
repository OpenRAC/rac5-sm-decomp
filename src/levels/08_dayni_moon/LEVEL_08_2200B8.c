/* LEVEL_08:0x2200B8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_220080(int a0, int a1);

void func_2200B8(void)
{
    func_220080(1, 0xFFFF);
}
