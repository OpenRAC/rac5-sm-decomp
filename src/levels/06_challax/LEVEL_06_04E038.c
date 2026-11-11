/* LEVEL_06:0x04E038 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_04E000(int a0, int a1);

void func_04E038(void)
{
    func_04E000(1, 0xFFFF);
}
