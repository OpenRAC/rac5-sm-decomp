/* LEVEL_08:0x180880 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_180848(int a0, int a1);

void func_180880(void)
{
    func_180848(1, 0xFFFF);
}
