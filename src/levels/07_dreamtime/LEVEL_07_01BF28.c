/* LEVEL_07:0x01BF28 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01BEF0(int a0, int a1);

void func_01BF28(void)
{
    func_01BEF0(1, 0xFFFF);
}
