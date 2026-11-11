/* LEVEL_02:0x001880 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_001848(int a0, int a1);

void func_001880(void)
{
    func_001848(1, 0xFFFF);
}
