/* LEVEL_02:0x081C00 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_081BC8(int a0, int a1);

void func_081C00(void)
{
    func_081BC8(1, 0xFFFF);
}
