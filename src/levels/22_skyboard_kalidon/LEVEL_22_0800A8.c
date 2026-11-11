/* LEVEL_22:0x0800A8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_080070(int a0, int a1);

void func_0800A8(void)
{
    func_080070(1, 0xFFFF);
}
