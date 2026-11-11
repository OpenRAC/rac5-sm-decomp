/* LEVEL_10:0x163C38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_163C00(int a0, int a1);

void func_163C38(void)
{
    func_163C00(1, 0xFFFF);
}
