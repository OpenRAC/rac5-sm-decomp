/* LEVEL_02:0x038AA8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_038890(int a0, int a1);

void func_038AA8(void)
{
    func_038890(1, 0xFFFF);
}
