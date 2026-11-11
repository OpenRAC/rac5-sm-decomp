/* LEVEL_06:0x072C88 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_072C50(int a0, int a1);

void func_072C88(void)
{
    func_072C50(1, 0xFFFF);
}
