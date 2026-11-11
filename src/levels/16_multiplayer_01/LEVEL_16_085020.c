/* LEVEL_16:0x085020 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_084FE8(int a0, int a1);

void func_085020(void)
{
    func_084FE8(1, 0xFFFF);
}
