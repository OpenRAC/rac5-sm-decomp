/* LEVEL_16:0x05E800 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_05E760(int a0, int a1);

void func_05E800(void)
{
    func_05E760(1, 0xFFFF);
}
