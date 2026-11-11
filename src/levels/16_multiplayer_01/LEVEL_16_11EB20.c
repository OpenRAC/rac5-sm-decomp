/* LEVEL_16:0x11EB20 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_11EAE8(int a0, int a1);

void func_11EB20(void)
{
    func_11EAE8(1, 0xFFFF);
}
