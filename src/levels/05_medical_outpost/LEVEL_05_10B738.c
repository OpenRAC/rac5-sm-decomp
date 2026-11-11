/* LEVEL_05:0x10B738 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10B700(int a0, int a1);

void func_10B738(void)
{
    func_10B700(1, 0xFFFF);
}
