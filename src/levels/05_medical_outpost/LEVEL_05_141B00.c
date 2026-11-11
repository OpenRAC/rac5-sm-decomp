/* LEVEL_05:0x141B00 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_141A98(int a0, int a1);

void func_141B00(void)
{
    func_141A98(1, 0xFFFF);
}
