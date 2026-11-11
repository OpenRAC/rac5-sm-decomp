/* LEVEL_10:0x011A88 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_011830(int a0, int a1);

void func_011A88(void)
{
    func_011830(1, 0xFFFF);
}
