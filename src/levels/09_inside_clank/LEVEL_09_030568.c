/* LEVEL_09:0x030568 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_030530(int a0, int a1);

void func_030568(void)
{
    func_030530(1, 0xFFFF);
}
