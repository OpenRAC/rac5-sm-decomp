/* LEVEL_06:0x068978 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_068940(int a0, int a1);

void func_068978(void)
{
    func_068940(1, 0xFFFF);
}
