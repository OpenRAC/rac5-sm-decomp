/* LEVEL_04:0x1C8658 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1C8620(int a0, int a1);

void func_1C8658(void)
{
    func_1C8620(1, 0xFFFF);
}
