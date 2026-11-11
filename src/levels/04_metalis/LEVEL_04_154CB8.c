/* LEVEL_04:0x154CB8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_154C80(int a0, int a1);

void func_154CB8(void)
{
    func_154C80(1, 0xFFFF);
}
