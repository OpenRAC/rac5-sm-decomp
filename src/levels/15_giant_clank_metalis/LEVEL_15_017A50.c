/* LEVEL_15:0x017A50 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_017A18(int a0, int a1);

void func_017A50(void)
{
    func_017A18(1, 0xFFFF);
}
