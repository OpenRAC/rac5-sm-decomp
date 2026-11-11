/* LEVEL_01:0x02F888 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02F850(int a0, int a1);

void func_02F888(void)
{
    func_02F850(1, 0xFFFF);
}
