/* LEVEL_02:0x17C078 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_17C040(int a0, int a1);

void func_17C078(void)
{
    func_17C040(1, 0xFFFF);
}
