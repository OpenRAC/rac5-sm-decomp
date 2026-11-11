/* LEVEL_06:0x14BF08 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_14BED0(int a0, int a1);

void func_14BF08(void)
{
    func_14BED0(1, 0xFFFF);
}
