/* LEVEL_06:0x1A8E78 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1A8E40(int a0, int a1);

void func_1A8E78(void)
{
    func_1A8E40(1, 0xFFFF);
}
