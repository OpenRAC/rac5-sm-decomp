/* LEVEL_02:0x035BC8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_035B90(int a0, int a1);

void func_035BC8(void)
{
    func_035B90(1, 0xFFFF);
}
