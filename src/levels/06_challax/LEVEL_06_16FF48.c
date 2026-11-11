/* LEVEL_06:0x16FF48 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_16FF10(int a0, int a1);

void func_16FF48(void)
{
    func_16FF10(1, 0xFFFF);
}
