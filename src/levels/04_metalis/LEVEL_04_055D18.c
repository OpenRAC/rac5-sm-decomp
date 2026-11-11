/* LEVEL_04:0x055D18 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_055610(int a0, int a1);

void func_055D18(void)
{
    func_055610(1, 0xFFFF);
}
