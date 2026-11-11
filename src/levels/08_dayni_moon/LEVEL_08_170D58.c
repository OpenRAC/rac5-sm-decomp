/* LEVEL_08:0x170D58 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_170D20(int a0, int a1);

void func_170D58(void)
{
    func_170D20(1, 0xFFFF);
}
