/* LEVEL_05:0x16EB20 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16EAE8(int a0, int a1);

void func_16EB20(void)
{
    func_16EAE8(1, 0xFFFF);
}
