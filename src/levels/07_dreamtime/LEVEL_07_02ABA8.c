/* LEVEL_07:0x02ABA8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02AB70(int a0, int a1);

void func_02ABA8(void)
{
    func_02AB70(1, 0xFFFF);
}
