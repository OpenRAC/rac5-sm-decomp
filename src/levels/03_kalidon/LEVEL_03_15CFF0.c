/* LEVEL_03:0x15CFF0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15CFB8(int a0, int a1);

void func_15CFF0(void)
{
    func_15CFB8(1, 0xFFFF);
}
