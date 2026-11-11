/* LEVEL_09:0x06AA10 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_06A950(int a0, int a1);

void func_06AA10(void)
{
    func_06A950(1, 0xFFFF);
}
