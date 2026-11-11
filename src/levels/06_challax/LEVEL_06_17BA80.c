/* LEVEL_06:0x17BA80 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_17BA48(int a0, int a1);

void func_17BA80(void)
{
    func_17BA48(1, 0xFFFF);
}
