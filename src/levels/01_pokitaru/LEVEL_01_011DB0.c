/* LEVEL_01:0x011DB0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_011D78(int a0, int a1);

void func_011DB0(void)
{
    func_011D78(1, 0xFFFF);
}
