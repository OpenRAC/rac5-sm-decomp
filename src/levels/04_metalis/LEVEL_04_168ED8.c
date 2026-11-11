/* LEVEL_04:0x168ED8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_168EA0(int a0, int a1);

void func_168ED8(void)
{
    func_168EA0(1, 0xFFFF);
}
