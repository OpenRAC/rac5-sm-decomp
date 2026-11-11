/* LEVEL_10:0x1B1180 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1B0F60(int a0, int a1);

void func_1B1180(void)
{
    func_1B0F60(1, 0xFFFF);
}
