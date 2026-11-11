/* LEVEL_16:0x020950 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_020918(int a0, int a1);

void func_020950(void)
{
    func_020918(1, 0xFFFF);
}
