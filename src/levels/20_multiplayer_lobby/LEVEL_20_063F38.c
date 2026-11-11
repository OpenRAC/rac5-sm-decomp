/* LEVEL_20:0x063F38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_063F00(int a0, int a1);

void func_063F38(void)
{
    func_063F00(1, 0xFFFF);
}
