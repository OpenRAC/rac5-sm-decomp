/* LEVEL_15:0x070A88 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_070A50(int a0, int a1);

void func_070A88(void)
{
    func_070A50(1, 0xFFFF);
}
