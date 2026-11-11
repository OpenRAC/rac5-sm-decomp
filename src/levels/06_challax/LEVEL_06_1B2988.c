/* LEVEL_06:0x1B2988 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1B2950(int a0, int a1);

void func_1B2988(void)
{
    func_1B2950(1, 0xFFFF);
}
