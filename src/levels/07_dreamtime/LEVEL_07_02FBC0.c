/* LEVEL_07:0x02FBC0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02FB88(int a0, int a1);

void func_02FBC0(void)
{
    func_02FB88(1, 0xFFFF);
}
