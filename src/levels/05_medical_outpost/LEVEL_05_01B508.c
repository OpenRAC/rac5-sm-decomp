/* LEVEL_05:0x01B508 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_01B4D0(int a0, int a1);

void func_01B508(void)
{
    func_01B4D0(1, 0xFFFF);
}
