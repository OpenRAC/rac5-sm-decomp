/* LEVEL_07:0x15A140 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15A108(int a0, int a1);

void func_15A140(void)
{
    func_15A108(1, 0xFFFF);
}
