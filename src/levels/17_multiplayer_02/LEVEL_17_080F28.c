/* LEVEL_17:0x080F28 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_080EF0(int a0, int a1);

void func_080F28(void)
{
    func_080EF0(1, 0xFFFF);
}
