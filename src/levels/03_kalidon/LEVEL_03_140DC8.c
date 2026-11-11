/* LEVEL_03:0x140DC8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_140D90(int a0, int a1);

void func_140DC8(void)
{
    func_140D90(1, 0xFFFF);
}
