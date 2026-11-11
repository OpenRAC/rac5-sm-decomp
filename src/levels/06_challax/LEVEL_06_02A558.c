/* LEVEL_06:0x02A558 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02A520(int a0, int a1);

void func_02A558(void)
{
    func_02A520(1, 0xFFFF);
}
