/* LEVEL_04:0x191CC0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_190600(int a0, int a1);

void func_191CC0(void)
{
    func_190600(1, 0xFFFF);
}
