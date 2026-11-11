/* LEVEL_02:0x1F0670 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_1F0638(int a0, int a1);

void func_1F0670(void)
{
    func_1F0638(1, 0xFFFF);
}
