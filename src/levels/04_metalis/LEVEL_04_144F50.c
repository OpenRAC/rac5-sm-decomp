/* LEVEL_04:0x144F50 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_144F18(int a0, int a1);

void func_144F50(void)
{
    func_144F18(1, 0xFFFF);
}
