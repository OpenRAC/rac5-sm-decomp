/* LEVEL_04:0x06D798 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_06D760(int a0, int a1);

void func_06D798(void)
{
    func_06D760(1, 0xFFFF);
}
