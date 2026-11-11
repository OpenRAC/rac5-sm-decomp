/* LEVEL_05:0x02E540 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02E508(int a0, int a1);

void func_02E540(void)
{
    func_02E508(1, 0xFFFF);
}
