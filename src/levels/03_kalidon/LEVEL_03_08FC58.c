/* LEVEL_03:0x08FC58 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_08FC20(int a0, int a1);

void func_08FC58(void)
{
    func_08FC20(1, 0xFFFF);
}
