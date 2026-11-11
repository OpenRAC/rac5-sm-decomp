/* LEVEL_10:0x04CC40 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_04C578(int a0, int a1);

void func_04CC40(void)
{
    func_04C578(1, 0xFFFF);
}
