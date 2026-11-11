/* LEVEL_03:0x07B0B8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_07B080(int a0, int a1);

void func_07B0B8(void)
{
    func_07B080(1, 0xFFFF);
}
