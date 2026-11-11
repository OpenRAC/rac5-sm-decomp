/* LEVEL_20:0x001438 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_001400(int a0, int a1);

void func_001438(void)
{
    func_001400(1, 0xFFFF);
}
