/* LEVEL_01:0x06DE10 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_06DD50(int a0, int a1);

void func_06DE10(void)
{
    func_06DD50(1, 0xFFFF);
}
