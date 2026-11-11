/* LEVEL_06:0x018D70 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_018D38(int a0, int a1);

void func_018D70(void)
{
    func_018D38(1, 0xFFFF);
}
