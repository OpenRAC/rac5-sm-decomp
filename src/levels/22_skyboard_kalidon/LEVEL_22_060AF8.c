/* LEVEL_22:0x060AF8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_060A98(int a0, int a1);

void func_060AF8(void)
{
    func_060A98(1, 0xFFFF);
}
