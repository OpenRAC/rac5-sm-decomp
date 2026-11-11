/* LEVEL_03:0x072F60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_072F28(int a0, int a1);

void func_072F60(void)
{
    func_072F28(1, 0xFFFF);
}
