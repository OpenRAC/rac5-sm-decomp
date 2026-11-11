/* LEVEL_10:0x011B58 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_011B20(int a0, int a1);

void func_011B58(void)
{
    func_011B20(1, 0xFFFF);
}
