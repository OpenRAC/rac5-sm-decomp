/* LEVEL_02:0x183560 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_183178(int a0, int a1);

void func_183560(void)
{
    func_183178(1, 0xFFFF);
}
