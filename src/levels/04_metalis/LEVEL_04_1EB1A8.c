/* LEVEL_04:0x1EB1A8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1EB170(int a0, int a1);

void func_1EB1A8(void)
{
    func_1EB170(1, 0xFFFF);
}
