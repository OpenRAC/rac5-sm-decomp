/* LEVEL_03:0x109EC8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_109E90(int a0, int a1);

void func_109EC8(void)
{
    func_109E90(1, 0xFFFF);
}
