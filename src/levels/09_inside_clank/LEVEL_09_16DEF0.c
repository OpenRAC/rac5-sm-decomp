/* LEVEL_09:0x16DEF0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16DEB8(int a0, int a1);

void func_16DEF0(void)
{
    func_16DEB8(1, 0xFFFF);
}
