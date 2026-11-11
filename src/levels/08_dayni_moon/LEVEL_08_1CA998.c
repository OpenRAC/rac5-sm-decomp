/* LEVEL_08:0x1CA998 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1CA960(int a0, int a1);

void func_1CA998(void)
{
    func_1CA960(1, 0xFFFF);
}
