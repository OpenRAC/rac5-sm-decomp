/* LEVEL_06:0x13EC60 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_13EC28(int a0, int a1);

void func_13EC60(void)
{
    func_13EC28(1, 0xFFFF);
}
