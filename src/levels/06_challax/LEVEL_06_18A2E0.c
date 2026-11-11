/* LEVEL_06:0x18A2E0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_18A128(int a0, int a1);

void func_18A2E0(void)
{
    func_18A128(1, 0xFFFF);
}
