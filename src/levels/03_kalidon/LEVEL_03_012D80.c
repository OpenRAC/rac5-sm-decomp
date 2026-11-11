/* LEVEL_03:0x012D80 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_012D48(int a0, int a1);

void func_012D80(void)
{
    func_012D48(1, 0xFFFF);
}
