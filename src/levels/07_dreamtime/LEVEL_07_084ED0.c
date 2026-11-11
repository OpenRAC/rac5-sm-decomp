/* LEVEL_07:0x084ED0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_084E98(int a0, int a1);

void func_084ED0(void)
{
    func_084E98(1, 0xFFFF);
}
