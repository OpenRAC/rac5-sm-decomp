/* LEVEL_04:0x058488 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_058450(int a0, int a1);

void func_058488(void)
{
    func_058450(1, 0xFFFF);
}
