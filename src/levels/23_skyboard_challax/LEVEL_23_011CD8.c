/* LEVEL_23:0x011CD8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_011A80(int a0, int a1);

void func_011CD8(void)
{
    func_011A80(1, 0xFFFF);
}
