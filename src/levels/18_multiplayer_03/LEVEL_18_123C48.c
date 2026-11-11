/* LEVEL_18:0x123C48 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_123C10(int a0, int a1);

void func_123C48(void)
{
    func_123C10(1, 0xFFFF);
}
