/* LEVEL_23:0x02CF00 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02CEC8(int a0, int a1);

void func_02CF00(void)
{
    func_02CEC8(1, 0xFFFF);
}
