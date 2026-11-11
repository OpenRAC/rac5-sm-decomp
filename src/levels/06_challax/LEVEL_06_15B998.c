/* LEVEL_06:0x15B998 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_15B960(int a0, int a1);

void func_15B998(void)
{
    func_15B960(1, 0xFFFF);
}
