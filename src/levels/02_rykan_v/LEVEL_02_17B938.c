/* LEVEL_02:0x17B938 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_17B800(int a0, int a1);

void func_17B938(void)
{
    func_17B800(1, 0xFFFF);
}
