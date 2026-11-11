/* LEVEL_09:0x192C98 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_192C60(int a0, int a1);

void func_192C98(void)
{
    func_192C60(1, 0xFFFF);
}
