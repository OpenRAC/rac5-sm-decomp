/* LEVEL_04:0x1F4C60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1F4C28(int a0, int a1);

void func_1F4C60(void)
{
    func_1F4C28(1, 0xFFFF);
}
