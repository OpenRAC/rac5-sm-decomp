/* LEVEL_03:0x15C538 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15C500(int a0, int a1);

void func_15C538(void)
{
    func_15C500(1, 0xFFFF);
}
