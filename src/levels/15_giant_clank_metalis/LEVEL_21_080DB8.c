/* LEVEL_21:0x080DB8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_080D80(int a0, int a1);

void func_080DB8(void)
{
    func_080D80(1, 0xFFFF);
}
