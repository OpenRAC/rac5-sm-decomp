/* LEVEL_02:0x104A98 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_104A60(int a0, int a1);

void func_104A98(void)
{
    func_104A60(1, 0xFFFF);
}
