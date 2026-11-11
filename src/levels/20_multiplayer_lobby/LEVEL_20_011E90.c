/* LEVEL_20:0x011E90 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_011E40(int a0, int a1);

void func_011E90(void)
{
    func_011E40(1, 0xFFFF);
}
