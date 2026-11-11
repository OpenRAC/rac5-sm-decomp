/* LEVEL_02:0x14F070 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_14F038(int a0, int a1);

void func_14F070(void)
{
    func_14F038(1, 0xFFFF);
}
