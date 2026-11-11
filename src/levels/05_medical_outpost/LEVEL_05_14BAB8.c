/* LEVEL_05:0x14BAB8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_14BA50(int a0, int a1);

void func_14BAB8(void)
{
    func_14BA50(1, 0xFFFF);
}
