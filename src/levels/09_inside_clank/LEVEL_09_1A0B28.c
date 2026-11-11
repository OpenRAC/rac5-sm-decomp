/* LEVEL_09:0x1A0B28 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1A0AF0(int a0, int a1);

void func_1A0B28(void)
{
    func_1A0AF0(1, 0xFFFF);
}
