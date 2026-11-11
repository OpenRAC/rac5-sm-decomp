/* LEVEL_04:0x02E108 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02E0D0(int a0, int a1);

void func_02E108(void)
{
    func_02E0D0(1, 0xFFFF);
}
