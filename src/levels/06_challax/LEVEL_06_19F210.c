/* LEVEL_06:0x19F210 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_19F1D8(int a0, int a1);

void func_19F210(void)
{
    func_19F1D8(1, 0xFFFF);
}
