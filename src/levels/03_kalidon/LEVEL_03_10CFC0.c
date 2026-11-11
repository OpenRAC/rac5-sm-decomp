/* LEVEL_03:0x10CFC0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_10CF88(int a0, int a1);

void func_10CFC0(void)
{
    func_10CF88(1, 0xFFFF);
}
