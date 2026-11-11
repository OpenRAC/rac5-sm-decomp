/* LEVEL_04:0x141A38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_141A00(int a0, int a1);

void func_141A38(void)
{
    func_141A00(1, 0xFFFF);
}
