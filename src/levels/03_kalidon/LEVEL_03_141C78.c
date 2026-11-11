/* LEVEL_03:0x141C78 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_141C40(int a0, int a1);

void func_141C78(void)
{
    func_141C40(1, 0xFFFF);
}
