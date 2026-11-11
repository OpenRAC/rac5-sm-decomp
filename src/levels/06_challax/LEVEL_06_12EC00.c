/* LEVEL_06:0x12EC00 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_12EBA0(int a0, int a1);

void func_12EC00(void)
{
    func_12EBA0(1, 0xFFFF);
}
