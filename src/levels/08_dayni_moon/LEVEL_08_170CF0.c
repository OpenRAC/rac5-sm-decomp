/* LEVEL_08:0x170CF0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_170CB8(int a0, int a1);

void func_170CF0(void)
{
    func_170CB8(1, 0xFFFF);
}
