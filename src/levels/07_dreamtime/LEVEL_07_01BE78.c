/* LEVEL_07:0x01BE78 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01BE40(int a0, int a1);

void func_01BE78(void)
{
    func_01BE40(1, 0xFFFF);
}
