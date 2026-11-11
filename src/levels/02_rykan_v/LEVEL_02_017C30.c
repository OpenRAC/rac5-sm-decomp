/* LEVEL_02:0x017C30 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_017BF8(int a0, int a1);

void func_017C30(void)
{
    func_017BF8(1, 0xFFFF);
}
