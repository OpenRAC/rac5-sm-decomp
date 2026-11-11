/* LEVEL_03:0x032048 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_032010(int a0, int a1);

void func_032048(void)
{
    func_032010(1, 0xFFFF);
}
