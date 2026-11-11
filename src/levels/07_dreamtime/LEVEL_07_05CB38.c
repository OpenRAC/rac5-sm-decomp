/* LEVEL_07:0x05CB38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_05CB00(int a0, int a1);

void func_05CB38(void)
{
    func_05CB00(1, 0xFFFF);
}
