/* LEVEL_04:0x194B38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_194B00(int a0, int a1);

void func_194B38(void)
{
    func_194B00(1, 0xFFFF);
}
