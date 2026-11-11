/* LEVEL_22:0x110168 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_110130(int a0, int a1);

void func_110168(void)
{
    func_110130(1, 0xFFFF);
}
