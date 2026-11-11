/* LEVEL_02:0x012A58 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_012A08(int a0, int a1);

void func_012A58(void)
{
    func_012A08(1, 0xFFFF);
}
