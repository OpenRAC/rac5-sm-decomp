/* LEVEL_03:0x166138 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_166100(int a0, int a1);

void func_166138(void)
{
    func_166100(1, 0xFFFF);
}
