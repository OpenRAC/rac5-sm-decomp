/* LEVEL_18:0x101B28 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_101AF0(int a0, int a1);

void func_101B28(void)
{
    func_101AF0(1, 0xFFFF);
}
