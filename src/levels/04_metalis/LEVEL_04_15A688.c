/* LEVEL_04:0x15A688 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15A650(int a0, int a1);

void func_15A688(void)
{
    func_15A650(1, 0xFFFF);
}
