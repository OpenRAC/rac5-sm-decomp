/* LEVEL_05:0x15FB58 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15FB20(int a0, int a1);

void func_15FB58(void)
{
    func_15FB20(1, 0xFFFF);
}
