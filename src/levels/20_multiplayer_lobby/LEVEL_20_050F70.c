/* LEVEL_20:0x050F70 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_050F38(int a0, int a1);

void func_050F70(void)
{
    func_050F38(1, 0xFFFF);
}
