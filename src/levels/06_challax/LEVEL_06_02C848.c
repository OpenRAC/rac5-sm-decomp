/* LEVEL_06:0x02C848 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02C810(int a0, int a1);

void func_02C848(void)
{
    func_02C810(1, 0xFFFF);
}
