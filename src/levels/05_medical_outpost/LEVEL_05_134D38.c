/* LEVEL_05:0x134D38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_134D00(int a0, int a1);

void func_134D38(void)
{
    func_134D00(1, 0xFFFF);
}
