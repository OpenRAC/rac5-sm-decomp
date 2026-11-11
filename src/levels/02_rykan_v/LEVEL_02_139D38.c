/* LEVEL_02:0x139D38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_139D00(int a0, int a1);

void func_139D38(void)
{
    func_139D00(1, 0xFFFF);
}
