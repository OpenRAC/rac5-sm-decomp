/* LEVEL_06:0x11A050 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_11A018(int a0, int a1);

void func_11A050(void)
{
    func_11A018(1, 0xFFFF);
}
