/* LEVEL_06:0x04AC38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_04A570(int a0, int a1);

void func_04AC38(void)
{
    func_04A570(1, 0xFFFF);
}
