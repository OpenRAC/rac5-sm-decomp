/* LEVEL_09:0x08C550 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_08C518(int a0, int a1);

void func_08C550(void)
{
    func_08C518(1, 0xFFFF);
}
