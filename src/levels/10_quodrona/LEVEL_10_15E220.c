/* LEVEL_10:0x15E220 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15E1E8(int a0, int a1);

void func_15E220(void)
{
    func_15E1E8(1, 0xFFFF);
}
