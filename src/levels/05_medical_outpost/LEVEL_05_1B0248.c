/* LEVEL_05:0x1B0248 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1B0210(int a0, int a1);

void func_1B0248(void)
{
    func_1B0210(1, 0xFFFF);
}
