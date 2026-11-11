/* LEVEL_07:0x034338 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_034300(int a0, int a1);

void func_034338(void)
{
    func_034300(1, 0xFFFF);
}
