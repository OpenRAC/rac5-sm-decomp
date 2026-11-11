/* LEVEL_01:0x01A570 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01A538(int a0, int a1);

void func_01A570(void)
{
    func_01A538(1, 0xFFFF);
}
