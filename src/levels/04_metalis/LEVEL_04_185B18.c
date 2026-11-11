/* LEVEL_04:0x185B18 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_185AE0(int a0, int a1);

void func_185B18(void)
{
    func_185AE0(1, 0xFFFF);
}
