/* LEVEL_06:0x14F068 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_14F030(int a0, int a1);

void func_14F068(void)
{
    func_14F030(1, 0xFFFF);
}
