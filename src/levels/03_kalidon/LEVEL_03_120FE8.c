/* LEVEL_03:0x120FE8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_120FB0(int a0, int a1);

void func_120FE8(void)
{
    func_120FB0(1, 0xFFFF);
}
